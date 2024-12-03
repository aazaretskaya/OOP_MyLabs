#include "BattleVisitor.h"
#include "Princess.h"
#include "Dragon.h"
#include "Knight.h"
#include <cmath>

void ConcreteBattleVisitor::visit(NPC& npc1, NPC& npc2) {
    if (npc1.getType() == "Princess" && npc2.getType() == "Dragon") {
        npc2.notify(npc2.getName() + " ate " + npc1.getName());
    } else if (npc1.getType() == "Dragon" && npc2.getType() == "Princess") {
        npc1.notify(npc1.getName() + " ate " + npc2.getName());
    } else if (npc1.getType() == "Knight" && npc2.getType() == "Dragon") {
        npc1.notify(npc1.getName() + " killed " + npc2.getName());
    } else if (npc1.getType() == "Dragon" && npc2.getType() == "Knight") {
        npc2.notify(npc2.getName() + " killed " + npc1.getName());
    }
}