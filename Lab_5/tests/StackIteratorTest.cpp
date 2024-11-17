#include <gtest/gtest.h>
#include "../include/StackIterator.h"
#include "../include/Stack.h"
#include "../include/CustomMemoryResource.h"

TEST(StackIteratorTest, IterateThroughStack) {
    CustomMemoryResource mr;
    Stack<int> stack(&mr);
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Используем указатель на вершину стека
    StackIterator<int, std::pmr::polymorphic_allocator<int>> it(stack.top_node());
    int expectedValues[] = {3, 2, 1};
    int index = 0;

    while (it != StackIterator<int, std::pmr::polymorphic_allocator<int>>(nullptr)) {
        EXPECT_EQ(*it, expectedValues[index]);
        ++it;
        ++index;
    }
}

TEST(StackIteratorTest, CompareIterators) {
    CustomMemoryResource mr;
    Stack<int> stack(&mr);
    stack.push(1);
    stack.push(2);

    // Используем указатель на вершину стека
    StackIterator<int, std::pmr::polymorphic_allocator<int>> it1(stack.top_node());
    StackIterator<int, std::pmr::polymorphic_allocator<int>> it2(stack.top_node());
    StackIterator<int, std::pmr::polymorphic_allocator<int>> it3(stack.top_node()->next);

    EXPECT_TRUE(it1 == it2);
    EXPECT_FALSE(it1 == it3);
}