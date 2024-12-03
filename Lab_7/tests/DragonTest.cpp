#include "gtest/gtest.h"
#include "Dragon.h"


TEST(DragonTest, CreateDragon) {

    std::string expectedName = "TestDragon";
    int expectedX = 10;
    int expectedY = 20;
    std::string expectedType = "Dragon";

    std::shared_ptr<Dragon> dragon = std::make_shared<Dragon>(expectedName, expectedX, expectedY);

    EXPECT_EQ(dragon->getName(), expectedName);
    EXPECT_EQ(dragon->getX(), expectedX);
    EXPECT_EQ(dragon->getY(), expectedY);
    EXPECT_EQ(dragon->getType(), expectedType);
    EXPECT_TRUE(dragon->isAlive());
}