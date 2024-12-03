#ifndef PRINCESS_H
#define PRINCESS_H

#include "NPC.h"

class Princess : public NPC {
public:
    Princess(const std::string& name, int x, int y);
    void accept(BattleVisitor& visitor) override;
    std::string getType() const override;
};

#endif