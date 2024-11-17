#ifndef CUSTOMMEMORYRESOURCE_H
#define CUSTOMMEMORYRESOURCE_H

#include <memory_resource>
#include <map>
#include <cstddef>

class CustomMemoryResource : public std::pmr::memory_resource {
public:
    CustomMemoryResource() = default;
    ~CustomMemoryResource();

private:
    void* do_allocate(std::size_t bytes, std::size_t alignment) override;
    void do_deallocate(void* ptr, std::size_t bytes, std::size_t alignment) override;
    bool do_is_equal(const std::pmr::memory_resource& other) const noexcept override;

    std::map<void*, std::size_t> allocated_blocks;
};

#endif