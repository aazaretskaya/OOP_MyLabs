#include "../include/CustomMemoryResource.h"

CustomMemoryResource::~CustomMemoryResource() {
    for (const auto& [ptr, size] : allocated_blocks) {
        ::operator delete(ptr);
    }
}

void* CustomMemoryResource::do_allocate(std::size_t bytes, std::size_t alignment) {
    void* ptr = ::operator new(bytes, std::align_val_t(alignment));
    allocated_blocks[ptr] = bytes;
    return ptr;
}

void CustomMemoryResource::do_deallocate(void* ptr, std::size_t bytes, std::size_t alignment) {
    auto it = allocated_blocks.find(ptr);
    if (it != allocated_blocks.end()) {
        allocated_blocks.erase(it);
        ::operator delete(ptr, std::align_val_t(alignment));
    }
}

bool CustomMemoryResource::do_is_equal(const std::pmr::memory_resource& other) const noexcept {
    return this == &other;
}
