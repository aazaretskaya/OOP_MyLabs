#include <gtest/gtest.h>
#include "../include/NPC.h"
#include "../include/Princess.h"
#include "../include/Dragon.h"
#include "../include/Knight.h"

TEST(NPCTest, PrincessInitialization) {
    // Arrange
    std::string expectedName = "Princess1";
    int expectedX = 100;
    int expectedY = 100;

    // Act
    Princess princess(expectedName, expectedX, expectedY);

    // Assert
    EXPECT_EQ(princess.getName(), expectedName);
    EXPECT_EQ(princess.getX(), expectedX);
    EXPECT_EQ(princess.getY(), expectedY);
}

TEST(NPCTest, DragonInitialization) {
    // Arrange
    std::string expectedName = "Dragon1";
    int expectedX = 200;
    int expectedY = 200;

    // Act
    Dragon dragon(expectedName, expectedX, expectedY);

    // Assert
    EXPECT_EQ(dragon.getName(), expectedName);
    EXPECT_EQ(dragon.getX(), expectedX);
    EXPECT_EQ(dragon.getY(), expectedY);
}

TEST(NPCTest, KnightInitialization) {
    // Arrange
    std::string expectedName = "Knight1";
    int expectedX = 300;
    int expectedY = 300;

    // Act
    Knight knight(expectedName, expectedX, expectedY);

    // Assert
    EXPECT_EQ(knight.getName(), expectedName);
    EXPECT_EQ(knight.getX(), expectedX);
    EXPECT_EQ(knight.getY(), expectedY);
}