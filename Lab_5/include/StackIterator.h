#ifndef STACKITERATOR_H
#define STACKITERATOR_H

#include "Stack.h"
#include "Node.h"

template<typename T, typename Allocator>
class StackIterator {
public:
    using iterator_category = std::forward_iterator_tag;
    using value_type = T;
    using difference_type = std::ptrdiff_t;
    using pointer = T*;
    using reference = T&;

    StackIterator(Node<T>* node);

    reference operator*() const;

    pointer operator->() const;

    StackIterator& operator++();

    StackIterator operator++(int);

    bool operator==(const StackIterator& other) const;

    bool operator!=(const StackIterator& other) const;

private:
    Node<T>* current;
};

#endif // STACKITERATOR_H