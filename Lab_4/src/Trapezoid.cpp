#include "../include/Trapezoid.h"
#include <cmath>

template <Scalar T>
Trapezoid<T>::Trapezoid() {
    for (int i = 0; i < 4; ++i) {
        vertices[i] = std::make_unique<Point<T>>(0, 0);
    }
}

template <Scalar T>
Trapezoid<T>::Trapezoid(const Trapezoid& other) {
    for (int i = 0; i < 4; ++i) {
        vertices[i] = std::make_unique<Point<T>>(*other.vertices[i]);
    }
}

template <Scalar T>
Trapezoid<T>::Trapezoid(Trapezoid&& other) noexcept {
    for (int i = 0; i < 4; ++i) {
        vertices[i] = std::move(other.vertices[i]);
    }
}

template <Scalar T>
Trapezoid<T>& Trapezoid<T>::operator=(const Trapezoid& other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            vertices[i] = std::make_unique<Point<T>>(*other.vertices[i]);
        }
    }
    return *this;
}

template <Scalar T>
Trapezoid<T>& Trapezoid<T>::operator=(Trapezoid&& other) noexcept {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            vertices[i] = std::move(other.vertices[i]);
        }
    }
    return *this;
}

template <Scalar T>
bool Trapezoid<T>::operator==(const Trapezoid& other) const {
    for (int i = 0; i < 4; ++i) {
        if (*vertices[i] != *other.vertices[i]) {
            return false;
        }
    }
    return true;
}

template <Scalar T>
double Trapezoid<T>::area() const {
    auto [x1, y1] = *vertices[0];
    auto [x2, y2] = *vertices[1];
    auto [x3, y3] = *vertices[2];
    auto [x4, y4] = *vertices[3];

    double base1 = std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double base2 = std::sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));
    double height = std::abs(y2 - y4);

    return (base1 + base2) * height / 2.0;
}

template <Scalar T>
std::pair<T, T> Trapezoid<T>::geometricCenter() const {
    T x_sum = 0, y_sum = 0;
    for (const auto& vertex : vertices) {
        x_sum += vertex->getX();
        y_sum += vertex->getY();
    }
    return {x_sum / 4, y_sum / 4};
}

template <Scalar T>
void Trapezoid<T>::print(std::ostream& out) const {
    for (const auto& vertex : vertices) {
        out << *vertex << " ";
    }
}

template <Scalar T>
void Trapezoid<T>::read(std::istream& in) {
    for (auto& vertex : vertices) {
        T x, y;
        in >> x >> y;
        vertex->setX(x);
        vertex->setY(y);
    }
}

template <Scalar T>
Trapezoid<T>::operator double() const {
    return this->area();
}

template class Trapezoid<double>;