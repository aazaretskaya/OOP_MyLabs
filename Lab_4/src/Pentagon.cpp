#include "../include/Pentagon.h"
#include <cmath>

template <Scalar T>
Pentagon<T>::Pentagon() {
    for (int i = 0; i < 5; ++i) {
        vertices[i] = std::make_unique<Point<T>>(0, 0);
    }
}

template <Scalar T>
Pentagon<T>::Pentagon(const Pentagon& other) {
    for (int i = 0; i < 5; ++i) {
        vertices[i] = std::make_unique<Point<T>>(*other.vertices[i]);
    }
}

template <Scalar T>
Pentagon<T>::Pentagon(Pentagon&& other) noexcept {
    for (int i = 0; i < 5; ++i) {
        vertices[i] = std::move(other.vertices[i]);
    }
}

template <Scalar T>
Pentagon<T>& Pentagon<T>::operator=(const Pentagon& other) {
    if (this != &other) {
        for (int i = 0; i < 5; ++i) {
            vertices[i] = std::make_unique<Point<T>>(*other.vertices[i]);
        }
    }
    return *this;
}

template <Scalar T>
Pentagon<T>& Pentagon<T>::operator=(Pentagon&& other) noexcept {
    if (this != &other) {
        for (int i = 0; i < 5; ++i) {
            vertices[i] = std::move(other.vertices[i]);
        }
    }
    return *this;
}

template <Scalar T>
bool Pentagon<T>::operator==(const Pentagon& other) const {
    for (int i = 0; i < 5; ++i) {
        if (*vertices[i] != *other.vertices[i]) {
            return false;
        }
    }
    return true;
}

template <Scalar T>
double Pentagon<T>::area() const {
    double sum = 0;
    for (int i = 0; i < 5; ++i) {
        auto [x1, y1] = *vertices[i];
        auto [x2, y2] = *vertices[(i + 1) % 5];
        sum += (x1 * y2 - x2 * y1);
    }
    return std::abs(sum) / 2.0;
}

template <Scalar T>
std::pair<T, T> Pentagon<T>::geometricCenter() const {
    T x_sum = 0, y_sum = 0;
    for (const auto& vertex : vertices) {
        x_sum += vertex->getX();
        y_sum += vertex->getY();
    }
    return {x_sum / 5, y_sum / 5};
}

template <Scalar T>
void Pentagon<T>::print(std::ostream& out) const {
    for (const auto& vertex : vertices) {
        out << *vertex << " ";
    }
}

template <Scalar T>
void Pentagon<T>::read(std::istream& in) {
    for (auto& vertex : vertices) {
        T x, y;
        in >> x >> y;
        vertex->setX(x);
        vertex->setY(y);
    }
}

template <Scalar T>
Pentagon<T>::operator double() const {
    return this->area();
}

template class Pentagon<double>;