#include "Dragon.h"
#include "BattleVisitor.h"

Dragon::Dragon(const std::string& name, int x, int y) : NPC(name, x, y) {}

void Dragon::accept(BattleVisitor& visitor) {
    
}

std::string Dragon::getType() const {
    return "Dragon";
}