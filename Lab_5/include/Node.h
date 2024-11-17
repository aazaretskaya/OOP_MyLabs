#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T value;
    Node* next;

    Node() : value(), next(nullptr) {}
    Node(const T& value) : value(value), next(nullptr) {}
};

#endif