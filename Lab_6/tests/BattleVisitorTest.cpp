#include <gtest/gtest.h>
#include "../include/BattleVisitor.h"
#include "../include/Princess.h"
#include "../include/Dragon.h"
#include "../include/Knight.h"

TEST(BattleVisitorTest, PrincessVsDragon) {
    // Arrange
    Princess princess("Princess1", 100, 100);
    Dragon dragon("Dragon1", 100, 100);
    ConcreteBattleVisitor visitor;

    // Act
    visitor.visit(princess, dragon);

    // Assert
    // Add assertions based on the expected behavior
}

TEST(BattleVisitorTest, KnightVsDragon) {
    // Arrange
    Knight knight("Knight1", 100, 100);
    Dragon dragon("Dragon1", 100, 100);
    ConcreteBattleVisitor visitor;

    // Act
    visitor.visit(knight, dragon);

    // Assert
    // Add assertions based on the expected behavior
}