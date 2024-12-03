#include <gtest/gtest.h>
#include "../include/NPCFactory.h"
#include "../include/Princess.h"
#include "../include/Dragon.h"
#include "../include/Knight.h"

TEST(NPCFactoryTest, CreatePrincess) {

    ConcreteNPCFactory factory;
    std::string expectedType = "Princess";
    std::string expectedName = "Princess1";
    int expectedX = 100;
    int expectedY = 100;

    auto princess = factory.createNPC("Princess", "Princess1", 100, 100);

    ASSERT_NE(princess, nullptr);
    EXPECT_EQ(princess->getType(), expectedType);
    EXPECT_EQ(princess->getName(), expectedName);
    EXPECT_EQ(princess->getX(), expectedX);
    EXPECT_EQ(princess->getY(), expectedY);
}

TEST(NPCFactoryTest, CreateDragon) {
    
    ConcreteNPCFactory factory;
    std::string expectedType = "Dragon";
    std::string expectedName = "Dragon1";
    int expectedX = 200;
    int expectedY = 200;

    auto dragon = factory.createNPC("Dragon", "Dragon1", 200, 200);

    ASSERT_NE(dragon, nullptr);
    EXPECT_EQ(dragon->getType(), expectedType);
    EXPECT_EQ(dragon->getName(), expectedName);
    EXPECT_EQ(dragon->getX(), expectedX);
    EXPECT_EQ(dragon->getY(), expectedY);
}

TEST(NPCFactoryTest, CreateKnight) {

    ConcreteNPCFactory factory;
    std::string expectedType = "Knight";
    std::string expectedName = "Knight1";
    int expectedX = 300;
    int expectedY = 300;

    auto knight = factory.createNPC("Knight", "Knight1", 300, 300);

    ASSERT_NE(knight, nullptr);
    EXPECT_EQ(knight->getType(), expectedType);
    EXPECT_EQ(knight->getName(), expectedName);
    EXPECT_EQ(knight->getX(), expectedX);
    EXPECT_EQ(knight->getY(), expectedY);
}