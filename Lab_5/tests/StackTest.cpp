#include <gtest/gtest.h>
#include "../include/Stack.h"
#include "../include/CustomMemoryResource.h"

TEST(StackTest, PushAndPop) {
    CustomMemoryResource mr;
    Stack<int> stack(&mr);
    int value1 = 1;
    int value2 = 2;
    int expectedTopAfterPush = value2;
    int expectedTopAfterPop = value1;

    stack.push(value1);
    stack.push(value2);
    int actualTopAfterPush = stack.top();
    stack.pop();
    int actualTopAfterPop = stack.top();

    EXPECT_EQ(actualTopAfterPush, expectedTopAfterPush);
    EXPECT_EQ(actualTopAfterPop, expectedTopAfterPop);
}

TEST(StackTest, EmptyStack) {
    CustomMemoryResource mr;
    Stack<int> stack(&mr);
    bool expectedEmpty = true;

    bool actualEmpty = stack.empty();

    EXPECT_EQ(actualEmpty, expectedEmpty);
}

TEST(StackTest, NonEmptyStack) {
    CustomMemoryResource mr;
    Stack<int> stack(&mr);
    int value = 1;
    bool expectedEmptyAfterPush = false;

    stack.push(value);
    bool actualEmptyAfterPush = stack.empty();

    EXPECT_EQ(actualEmptyAfterPush, expectedEmptyAfterPush);
}

TEST(StackTest, PopFromEmptyStack) {
    CustomMemoryResource mr;
    Stack<int> stack(&mr);

    EXPECT_THROW(stack.pop(), std::runtime_error);
}

TEST(StackTest, TopFromEmptyStack) {
    CustomMemoryResource mr;
    Stack<int> stack(&mr);

    EXPECT_THROW(stack.top(), std::runtime_error);
}