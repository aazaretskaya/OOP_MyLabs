#include "../include/Princess.h"
#include "../include/BattleVisitor.h"

Princess::Princess(const std::string& name, int x, int y) : NPC(name, x, y) {}

void Princess::accept(BattleVisitor& visitor) {
    
}

std::string Princess::getType() const {
    return "Princess";
}