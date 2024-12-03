#include <iostream>
#include <vector>
#include <memory>
#include "../include/NPC.h"
#include "../include/NPCFactory.h"
#include "../include/BattleVisitor.h"
#include "../include/Observer.h"
#include "../include/Logger.h"

int main() {
    ConcreteNPCFactory factory;
    ConcreteBattleVisitor battleVisitor;

    std::vector<std::shared_ptr<NPC>> npcs;
    npcs.push_back(factory.createNPC("Princess", "Princess1", 100, 100));
    npcs.push_back(factory.createNPC("Dragon", "Dragon1", 200, 200));
    npcs.push_back(factory.createNPC("Knight", "Knight1", 300, 300));

    for (auto& npc : npcs) {
        npc->attach(std::make_shared<ScreenLogger>());
        npc->attach(std::make_shared<FileLogger>());
    }

    for (auto& npc1 : npcs) {
        for (auto& npc2 : npcs) {
            if (npc1 != npc2) {
                battleVisitor.visit(*npc1, *npc2);
            }
        }
    }

    return 0;
}