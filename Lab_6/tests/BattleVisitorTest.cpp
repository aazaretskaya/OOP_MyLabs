#include <gtest/gtest.h>
#include "../include/BattleVisitor.h"
#include "../include/Princess.h"
#include "../include/Dragon.h"
#include "../include/Knight.h"

TEST(BattleVisitorTest, PrincessVsDragon) {

    Princess princess("Princess1", 100, 100);
    Dragon dragon("Dragon1", 100, 100);
    ConcreteBattleVisitor visitor;

    visitor.visit(princess, dragon);

}

TEST(BattleVisitorTest, KnightVsDragon) {

    Knight knight("Knight1", 100, 100);
    Dragon dragon("Dragon1", 100, 100);
    ConcreteBattleVisitor visitor;

    visitor.visit(knight, dragon);
}