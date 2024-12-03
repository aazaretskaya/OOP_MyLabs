#ifndef BATTLEVISITOR_H
#define BATTLEVISITOR_H

#include "NPC.h"

class BattleVisitor {
public:
    virtual ~BattleVisitor() = default;
    virtual void visit(NPC& npc1, NPC& npc2) = 0;
};

class ConcreteBattleVisitor : public BattleVisitor {
public:
    void visit(NPC& npc1, NPC& npc2) override;
};

#endif 