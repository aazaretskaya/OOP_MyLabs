#include "../include/NPC.h"
#include "../include/BattleVisitor.h"
#include "../include/Observer.h"

NPC::NPC(const std::string& name, int x, int y) : name(name), x(x), y(y) {}

std::string NPC::getName() const {
    return name;
}

int NPC::getX() const {
    return x;
}

int NPC::getY() const {
    return y;
}

void NPC::attach(std::shared_ptr<Observer> observer) {
    observers.push_back(observer);
}

void NPC::notify(const std::string& event) {
    for (auto& observer : observers) {
        observer->update(event);
    }
}