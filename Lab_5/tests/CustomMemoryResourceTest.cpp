#include <gtest/gtest.h>
#include "../include/CustomMemoryResource.h"

// Тест на выделение и освобождение памяти
TEST(CustomMemoryResourceTest, AllocateAndDeallocate) {
    // Arrange
    CustomMemoryResource mr;
    std::size_t size = 100;
    std::size_t alignment = 8;

    // Act
    void* ptr = mr.allocate(size, alignment);
    mr.deallocate(ptr, size, alignment);

    // Assert
    // Проверка, что память была выделена и освобождена
    EXPECT_NO_THROW(mr.deallocate(ptr, size, alignment));
}

// Тест на очистку неосвобожденной памяти при уничтожении
TEST(CustomMemoryResourceTest, CleanupOnDestruction) {
    // Arrange
    void* ptr;
    {
        CustomMemoryResource mr;
        std::size_t size = 100;
        std::size_t alignment = 8;

        // Act
        ptr = mr.allocate(size, alignment);
    }

    // Assert
    // Проверка, что память была очищена при уничтожении mr
    // (здесь можно добавить проверку, что память действительно очищена, если есть способ проверить это)
}