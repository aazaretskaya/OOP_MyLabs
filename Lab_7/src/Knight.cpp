#include "Knight.h"
#include "BattleVisitor.h"

Knight::Knight(const std::string& name, int x, int y) : NPC(name, x, y) {}

void Knight::accept(BattleVisitor& visitor) {
    
}

std::string Knight::getType() const {
    return "Knight";
}