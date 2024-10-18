#include "../include/Trapezoid.h"
#include <cmath>

Trapezoid::Trapezoid() {
    // Инициализация массива вершин
    for (int i = 0; i < 4; ++i) {
        vertices[i] = {0.0, 0.0};
    }
}

double Trapezoid::area() const {
    auto [x1, y1] = vertices[0];
    auto [x2, y2] = vertices[1];
    auto [x3, y3] = vertices[2];
    auto [x4, y4] = vertices[3];

    double base1 = std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double base2 = std::sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));
    double height = std::abs(y2 - y4);

    return (base1 + base2) * height / 2.0;
}

std::pair<double, double> Trapezoid::geometricCenter() const {
    double x_sum = 0, y_sum = 0;
    for (const auto& [x, y] : vertices) {
        x_sum += x;
        y_sum += y;
    }
    return {x_sum / 4, y_sum / 4};
}

void Trapezoid::print(std::ostream& out) const {
    for (const auto& [x, y] : vertices) {
        out << "(" << x << ", " << y << ") ";
    }
}

void Trapezoid::read(std::istream& in) {
    for (auto& [x, y] : vertices) {
        in >> x >> y;
    }
}

Trapezoid::operator double() const {
    return this->area();
}

std::ostream& operator<<(std::ostream& os, const Trapezoid& obj) {
    obj.print(os);
    return os;
}

std::istream& operator>>(std::istream& is, Trapezoid& obj) {
    obj.read(is);
    return is;
}