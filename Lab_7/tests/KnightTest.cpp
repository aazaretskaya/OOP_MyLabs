#include "gtest/gtest.h"
#include "Knight.h"


TEST(KnightTest, CreateKnight) {
    
    std::string expectedName = "TestKnight";
    int expectedX = 10;
    int expectedY = 20;
    std::string expectedType = "Knight";

    std::shared_ptr<Knight> knight = std::make_shared<Knight>(expectedName, expectedX, expectedY);

    EXPECT_EQ(knight->getName(), expectedName);
    EXPECT_EQ(knight->getX(), expectedX);
    EXPECT_EQ(knight->getY(), expectedY);
    EXPECT_EQ(knight->getType(), expectedType);
    EXPECT_TRUE(knight->isAlive());
}