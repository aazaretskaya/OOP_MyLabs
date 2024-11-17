#include "../include/Stack.h"

template<typename T, typename Allocator>
Stack<T, Allocator>::Stack(std::pmr::memory_resource* mr)
    : allocator_(mr) {}

template<typename T, typename Allocator>
void Stack<T, Allocator>::push(const T& value) {
    Node<T>* new_node = allocator_.allocate(1);
    allocator_.construct(new_node, value);
    new_node->next = head;
    head = new_node;
}

template<typename T, typename Allocator>
void Stack<T, Allocator>::pop() {
    if (empty()) {
        throw std::runtime_error("Stack is empty");
    }
    Node<T>* old_head = head;
    head = head->next;
    allocator_.destroy(old_head);
    allocator_.deallocate(old_head, 1);
}

template<typename T, typename Allocator>
T& Stack<T, Allocator>::top() {
    if (empty()) {
        throw std::runtime_error("Stack is empty");
    }
    return head->value;
}

template<typename T, typename Allocator>
bool Stack<T, Allocator>::empty() const {
    return head == nullptr;
}

template class Stack<int>;
