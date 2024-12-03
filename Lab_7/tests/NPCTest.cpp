#include "gtest/gtest.h"
#include "NPC.h"
#include "Princess.h"
#include "Dragon.h"
#include "Knight.h"

TEST(NPCTest, CreateNPC) {

    std::string expectedName = "TestNPC";
    int expectedX = 10;
    int expectedY = 20;

    std::shared_ptr<NPC> npc = std::make_shared<Princess>(expectedName, expectedX, expectedY);

    EXPECT_EQ(npc->getName(), expectedName);
    EXPECT_EQ(npc->getX(), expectedX);
    EXPECT_EQ(npc->getY(), expectedY);
    EXPECT_TRUE(npc->isAlive());
}

TEST(NPCTest, MoveNPC) {

    std::string name = "TestNPC";
    int initialX = 10;
    int initialY = 20;
    int dx = 5;
    int dy = 10;
    int expectedX = initialX + dx;
    int expectedY = initialY + dy;

    std::shared_ptr<NPC> npc = std::make_shared<Princess>(name, initialX, initialY);

    npc->move(dx, dy);

    EXPECT_EQ(npc->getX(), expectedX);
    EXPECT_EQ(npc->getY(), expectedY);
}


TEST(NPCTest, KillNPC) {
    
    std::string name = "TestNPC";
    int x = 10;
    int y = 20;
    bool expectedAlive = false;

    std::shared_ptr<NPC> npc = std::make_shared<Princess>(name, x, y);

    npc->kill();

    EXPECT_EQ(npc->isAlive(), expectedAlive);
}