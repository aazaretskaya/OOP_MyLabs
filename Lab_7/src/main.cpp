#include <iostream>
#include <vector>
#include <memory>
#include <thread>
#include <chrono>
#include <random>
#include <shared_mutex>
#include <condition_variable>
#include <queue>
#include <mutex>
#include "NPC.h"
#include "NPCFactory.h"
#include "BattleVisitor.h"
#include "Observer.h"
#include "Logger.h"
#include "Constants.h"

const int GAME_DURATION = 30; 

std::shared_mutex npcMutex;
std::vector<std::shared_ptr<NPC>> npcs;
std::queue<std::pair<std::shared_ptr<NPC>, std::shared_ptr<NPC>>> battleQueue;
std::mutex battleQueueMutex;
std::condition_variable battleQueueCV;

void moveNPCs() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(-1, 1);

    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::shared_lock<std::shared_mutex> lock(npcMutex);
        for (auto& npc : npcs) {
            if (!npc->isAlive()) continue;

            int dx = 0, dy = 0;
            if (npc->getType() == "Knight") {
                dx = 30;
                dy = dist(gen);
            } else if (npc->getType() == "Dragon") {
                dx = 50;
                dy = dist(gen);
            } else if (npc->getType() == "Princess") {
                dx = 1;
                dy = dist(gen);
            }

            npc->move(dx, dy);

            for (auto& other : npcs) {
                if (npc != other && other->isAlive()) {
                    int distance = std::sqrt((npc->getX() - other->getX()) * (npc->getX() - other->getX()) +
                                             (npc->getY() - other->getY()) * (npc->getY() - other->getY()));

                    if ((npc->getType() == "Knight" && distance <= 10) ||
                        (npc->getType() == "Dragon" && distance <= 30) ||
                        (npc->getType() == "Princess" && distance <= 1)) {
                        std::lock_guard<std::mutex> battleLock(battleQueueMutex);
                        battleQueue.push(std::make_pair(npc, other));
                        battleQueueCV.notify_one();
                    }
                }
            }
        }
    }
}

void processBattles() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 6);

    while (true) {
        std::unique_lock<std::mutex> battleLock(battleQueueMutex);
        battleQueueCV.wait(battleLock, [] { return !battleQueue.empty(); });

        auto battle = battleQueue.front();
        battleQueue.pop();
        battleLock.unlock();

        auto npc1 = battle.first;
        auto npc2 = battle.second;

        int attack1 = dist(gen);
        int defense2 = dist(gen);
        int attack2 = dist(gen);
        int defense1 = dist(gen);

        if (attack1 > defense2) {
            npc2->kill();
            npc1->notify(npc1->getName() + " killed " + npc2->getName());
        }
        if (attack2 > defense1) {
            npc1->kill();
            npc2->notify(npc2->getName() + " killed " + npc1->getName());
        }
    }
}

void printMap() {
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::shared_lock<std::shared_mutex> lock(npcMutex);
        std::cout << "Map:" << std::endl;
        for (auto& npc : npcs) {
            if (npc->isAlive()) {
                std::cout << npc->getName() << " at (" << npc->getX() << ", " << npc->getY() << ")" << std::endl;
            }
        }
    }
}

int main() {
    ConcreteNPCFactory factory;
    ConcreteBattleVisitor battleVisitor;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, MAP_SIZE_X);

    for (int i = 0; i < 50; ++i) {
        std::string type = (i % 3 == 0) ? "Princess" : (i % 3 == 1) ? "Dragon" : "Knight";
        std::string name = type + std::to_string(i);
        int x = dist(gen);
        int y = dist(gen);
        npcs.push_back(factory.createNPC(type, name, x, y));
    }

    for (auto& npc : npcs) {
        npc->attach(std::make_shared<ScreenLogger>());
        npc->attach(std::make_shared<FileLogger>());
    }

    std::thread moveThread(moveNPCs);
    std::thread battleThread(processBattles);
    std::thread printThread(printMap);

    std::this_thread::sleep_for(std::chrono::seconds(GAME_DURATION));

    moveThread.detach();
    battleThread.detach();
    printThread.detach();

    std::cout << "Game Over. Survivors:" << std::endl;
    std::shared_lock<std::shared_mutex> lock(npcMutex);
    for (auto& npc : npcs) {
        if (npc->isAlive()) {
            std::cout << npc->getName() << " at (" << npc->getX() << ", " << npc->getY() << ")" << std::endl;
        }
    }

    return 0;
}