#include <gtest/gtest.h>
#include "../include/Stack.h"
#include "../include/CustomMemoryResource.h"

// Тест на добавление и удаление элементов
TEST(StackTest, PushAndPop) {
    // Arrange
    CustomMemoryResource mr;
    Stack<int> stack(&mr);
    int value1 = 1;
    int value2 = 2;
    int expectedTopAfterPush = value2;
    int expectedTopAfterPop = value1;

    // Act
    stack.push(value1);
    stack.push(value2);
    int actualTopAfterPush = stack.top();
    stack.pop();
    int actualTopAfterPop = stack.top();

    // Assert
    EXPECT_EQ(actualTopAfterPush, expectedTopAfterPush);
    EXPECT_EQ(actualTopAfterPop, expectedTopAfterPop);
}

// Тест на проверку пустого стека
TEST(StackTest, EmptyStack) {
    // Arrange
    CustomMemoryResource mr;
    Stack<int> stack(&mr);
    bool expectedEmpty = true;

    // Act
    bool actualEmpty = stack.empty();

    // Assert
    EXPECT_EQ(actualEmpty, expectedEmpty);
}

// Тест на проверку непустого стека
TEST(StackTest, NonEmptyStack) {
    // Arrange
    CustomMemoryResource mr;
    Stack<int> stack(&mr);
    int value = 1;
    bool expectedEmptyAfterPush = false;

    // Act
    stack.push(value);
    bool actualEmptyAfterPush = stack.empty();

    // Assert
    EXPECT_EQ(actualEmptyAfterPush, expectedEmptyAfterPush);
}

// Тест на попытку удаления из пустого стека
TEST(StackTest, PopFromEmptyStack) {
    // Arrange
    CustomMemoryResource mr;
    Stack<int> stack(&mr);

    // Act & Assert
    EXPECT_THROW(stack.pop(), std::runtime_error);
}

// Тест на попытку получения верхнего элемента из пустого стека
TEST(StackTest, TopFromEmptyStack) {
    // Arrange
    CustomMemoryResource mr;
    Stack<int> stack(&mr);

    // Act & Assert
    EXPECT_THROW(stack.top(), std::runtime_error);
}