#include "gtest/gtest.h"
#include "Princess.h"

TEST(PrincessTest, CreatePrincess) {

    std::string expectedName = "TestPrincess";
    int expectedX = 10;
    int expectedY = 20;
    std::string expectedType = "Princess";

    std::shared_ptr<Princess> princess = std::make_shared<Princess>(expectedName, expectedX, expectedY);

    EXPECT_EQ(princess->getName(), expectedName);
    EXPECT_EQ(princess->getX(), expectedX);
    EXPECT_EQ(princess->getY(), expectedY);
    EXPECT_EQ(princess->getType(), expectedType);
    EXPECT_TRUE(princess->isAlive());
}