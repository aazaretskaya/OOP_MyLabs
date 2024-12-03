#include <gtest/gtest.h>
#include "../include/NPCFactory.h"
#include "../include/Princess.h"
#include "../include/Dragon.h"
#include "../include/Knight.h"

TEST(NPCFactoryTest, CreatePrincess) {
    // Arrange
    ConcreteNPCFactory factory;
    std::string expectedType = "Princess";
    std::string expectedName = "Princess1";
    int expectedX = 100;
    int expectedY = 100;

    // Act
    auto princess = factory.createNPC("Princess", "Princess1", 100, 100);

    // Assert
    ASSERT_NE(princess, nullptr);
    EXPECT_EQ(princess->getType(), expectedType);
    EXPECT_EQ(princess->getName(), expectedName);
    EXPECT_EQ(princess->getX(), expectedX);
    EXPECT_EQ(princess->getY(), expectedY);
}

TEST(NPCFactoryTest, CreateDragon) {
    // Arrange
    ConcreteNPCFactory factory;
    std::string expectedType = "Dragon";
    std::string expectedName = "Dragon1";
    int expectedX = 200;
    int expectedY = 200;

    // Act
    auto dragon = factory.createNPC("Dragon", "Dragon1", 200, 200);

    // Assert
    ASSERT_NE(dragon, nullptr);
    EXPECT_EQ(dragon->getType(), expectedType);
    EXPECT_EQ(dragon->getName(), expectedName);
    EXPECT_EQ(dragon->getX(), expectedX);
    EXPECT_EQ(dragon->getY(), expectedY);
}

TEST(NPCFactoryTest, CreateKnight) {
    // Arrange
    ConcreteNPCFactory factory;
    std::string expectedType = "Knight";
    std::string expectedName = "Knight1";
    int expectedX = 300;
    int expectedY = 300;

    // Act
    auto knight = factory.createNPC("Knight", "Knight1", 300, 300);

    // Assert
    ASSERT_NE(knight, nullptr);
    EXPECT_EQ(knight->getType(), expectedType);
    EXPECT_EQ(knight->getName(), expectedName);
    EXPECT_EQ(knight->getX(), expectedX);
    EXPECT_EQ(knight->getY(), expectedY);
}