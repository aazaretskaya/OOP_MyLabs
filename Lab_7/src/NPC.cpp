#include "NPC.h"
#include "BattleVisitor.h"
#include "Observer.h"
#include "Constants.h"

NPC::NPC(const std::string& name, int x, int y) : name(name), x(x), y(y), alive(true) {}

std::string NPC::getName() const {
    std::shared_lock<std::shared_mutex> lock(mutex);
    return name;
}

int NPC::getX() const {
    std::shared_lock<std::shared_mutex> lock(mutex);
    return x;
}

int NPC::getY() const {
    std::shared_lock<std::shared_mutex> lock(mutex);
    return y;
}

bool NPC::isAlive() const {
    std::shared_lock<std::shared_mutex> lock(mutex);
    return alive;
}

void NPC::move(int dx, int dy) {
    std::unique_lock<std::shared_mutex> lock(mutex);
    x = std::max(0, std::min(x + dx, MAP_SIZE_X));
    y = std::max(0, std::min(y + dy, MAP_SIZE_Y));
}

void NPC::kill() {
    std::unique_lock<std::shared_mutex> lock(mutex);
    alive = false;
}

void NPC::attach(std::shared_ptr<Observer> observer) {
    std::unique_lock<std::shared_mutex> lock(mutex);
    observers.push_back(observer);
}

void NPC::notify(const std::string& event) {
    std::shared_lock<std::shared_mutex> lock(mutex);
    for (auto& observer : observers) {
        observer->update(event);
    }
}