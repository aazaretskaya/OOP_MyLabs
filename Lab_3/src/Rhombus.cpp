#include "../include/Rhombus.h"
#include <cmath>

Rhombus::Rhombus() {
    // Инициализация массива вершин
    for (int i = 0; i < 4; ++i) {
        vertices[i] = {0.0, 0.0};
    }
}

double Rhombus::area() const {
    auto [x1, y1] = vertices[0];
    auto [x2, y2] = vertices[2];
    double d1 = std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    auto [x3, y3] = vertices[1];
    auto [x4, y4] = vertices[3];
    double d2 = std::sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));

    return (d1 * d2) / 2.0;
}

std::pair<double, double> Rhombus::geometricCenter() const {
    double x_sum = 0, y_sum = 0;
    for (const auto& [x, y] : vertices) {
        x_sum += x;
        y_sum += y;
    }
    return {x_sum / 4, y_sum / 4};
}

void Rhombus::print(std::ostream& out) const {
    for (const auto& [x, y] : vertices) {
        out << "(" << x << ", " << y << ") ";
    }
}

void Rhombus::read(std::istream& in) {
    for (auto& [x, y] : vertices) {
        in >> x >> y;
    }
}

Rhombus::operator double() const {
    return this->area();
}

std::ostream& operator<<(std::ostream& os, const Rhombus& obj) {
    obj.print(os);
    return os;
}

std::istream& operator>>(std::istream& is, Rhombus& obj) {
    obj.read(is);
    return is;
}