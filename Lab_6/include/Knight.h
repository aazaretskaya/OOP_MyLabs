#ifndef KNIGHT_H
#define KNIGHT_H

#include "NPC.h"

class Knight : public NPC {
public:
    Knight(const std::string& name, int x, int y);
    void accept(BattleVisitor& visitor) override;
    std::string getType() const override;
};

#endif 