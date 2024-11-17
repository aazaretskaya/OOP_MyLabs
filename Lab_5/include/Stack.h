#ifndef STACK_H
#define STACK_H

#include <memory_resource>
#include <stdexcept>
#include "Node.h"

template<typename T, typename Allocator = std::pmr::polymorphic_allocator<Node<T>>>
class Stack {
public:
    using value_type = T;
    using allocator_type = Allocator;
    using size_type = std::size_t;

    explicit Stack(std::pmr::memory_resource* mr = std::pmr::get_default_resource());

    void push(const T& value);
    void pop();
    T& top();
    bool empty() const;

    // Добавляем метод для получения указателя на вершину стека
    Node<T>* top_node() {
        return head;
    }

    // Дружественный доступ для StackIterator
    template<typename U, typename A>
    friend class StackIterator;

private:
    Node<T>* head = nullptr;
    Allocator allocator_;
};

#endif // STACK_H