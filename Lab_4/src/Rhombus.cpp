#include "../include/Rhombus.h"
#include <cmath>

template <Scalar T>
Rhombus<T>::Rhombus() {
    for (int i = 0; i < 4; ++i) {
        vertices[i] = std::make_unique<Point<T>>(0, 0);
    }
}

template <Scalar T>
Rhombus<T>::Rhombus(const Rhombus& other) {
    for (int i = 0; i < 4; ++i) {
        vertices[i] = std::make_unique<Point<T>>(*other.vertices[i]);
    }
}

template <Scalar T>
Rhombus<T>::Rhombus(Rhombus&& other) noexcept {
    for (int i = 0; i < 4; ++i) {
        vertices[i] = std::move(other.vertices[i]);
    }
}

template <Scalar T>
Rhombus<T>& Rhombus<T>::operator=(const Rhombus& other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            vertices[i] = std::make_unique<Point<T>>(*other.vertices[i]);
        }
    }
    return *this;
}

template <Scalar T>
Rhombus<T>& Rhombus<T>::operator=(Rhombus&& other) noexcept {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            vertices[i] = std::move(other.vertices[i]);
        }
    }
    return *this;
}

template <Scalar T>
bool Rhombus<T>::operator==(const Rhombus& other) const {
    for (int i = 0; i < 4; ++i) {
        if (*vertices[i] != *other.vertices[i]) {
            return false;
        }
    }
    return true;
}

template <Scalar T>
double Rhombus<T>::area() const {
    auto [x1, y1] = *vertices[0];
    auto [x2, y2] = *vertices[1];
    auto [x3, y3] = *vertices[2];
    auto [x4, y4] = *vertices[3];

    double d1 = std::sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double d2 = std::sqrt((x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4));

    return (d1 * d2) / 2.0;
}

template <Scalar T>
std::pair<T, T> Rhombus<T>::geometricCenter() const {
    T x_sum = 0, y_sum = 0;
    for (const auto& vertex : vertices) {
        x_sum += vertex->getX();
        y_sum += vertex->getY();
    }
    return {x_sum / 4, y_sum / 4};
}

template <Scalar T>
void Rhombus<T>::print(std::ostream& out) const {
    for (const auto& vertex : vertices) {
        out << *vertex << " ";
    }
}

template <Scalar T>
void Rhombus<T>::read(std::istream& in) {
    for (auto& vertex : vertices) {
        T x, y;
        in >> x >> y;
        vertex->setX(x);
        vertex->setY(y);
    }
}

template <Scalar T>
Rhombus<T>::operator double() const {
    return this->area();
}

template class Rhombus<double>;