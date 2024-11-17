#include "../include/StackIterator.h"

template<typename T, typename Allocator>
StackIterator<T, Allocator>::StackIterator(Node<T>* node)
    : current(node) {}

template<typename T, typename Allocator>
typename StackIterator<T, Allocator>::reference StackIterator<T, Allocator>::operator*() const {
    return current->value;
}

template<typename T, typename Allocator>
typename StackIterator<T, Allocator>::pointer StackIterator<T, Allocator>::operator->() const {
    return &current->value;
}

template<typename T, typename Allocator>
StackIterator<T, Allocator>& StackIterator<T, Allocator>::operator++() {
    current = current->next;
    return *this;
}

template<typename T, typename Allocator>
StackIterator<T, Allocator> StackIterator<T, Allocator>::operator++(int) {
    StackIterator tmp = *this;
    ++(*this);
    return tmp;
}

template<typename T, typename Allocator>
bool StackIterator<T, Allocator>::operator==(const StackIterator& other) const {
    return current == other.current;
}

template<typename T, typename Allocator>
bool StackIterator<T, Allocator>::operator!=(const StackIterator& other) const {
    return !(*this == other);
}

template class StackIterator<int, std::pmr::polymorphic_allocator<int>>;
