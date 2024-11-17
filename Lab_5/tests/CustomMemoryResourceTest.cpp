#include <gtest/gtest.h>
#include "../include/CustomMemoryResource.h"

TEST(CustomMemoryResourceTest, AllocateAndDeallocate) {
    CustomMemoryResource mr;
    std::size_t size = 100;
    std::size_t alignment = 8;

    void* ptr = mr.allocate(size, alignment);
    mr.deallocate(ptr, size, alignment);

    EXPECT_NO_THROW(mr.deallocate(ptr, size, alignment));
}

TEST(CustomMemoryResourceTest, CleanupOnDestruction) {
    void* ptr;
    {
        CustomMemoryResource mr;
        std::size_t size = 100;
        std::size_t alignment = 8;

        ptr = mr.allocate(size, alignment);
    }
}