#include "../include/Pentagon.h"
#include <cmath>

Pentagon::Pentagon() {
    for (int i = 0; i < 5; ++i) {
        vertices[i] = {0.0, 0.0};
    }
}

Pentagon::Pentagon(const Pentagon& other) {
    for (int i = 0; i < 5; ++i) {
        vertices[i] = other.vertices[i];
    }
}

Pentagon::Pentagon(Pentagon&& other) noexcept {
    for (int i = 0; i < 5; ++i) {
        vertices[i] = std::move(other.vertices[i]);
    }
}

Pentagon& Pentagon::operator=(const Pentagon& other) {
    if (this != &other) {
        for (int i = 0; i < 5; ++i) {
            vertices[i] = other.vertices[i];
        }
    }
    return *this;
}

Pentagon& Pentagon::operator=(Pentagon&& other) noexcept {
    if (this != &other) {
        for (int i = 0; i < 5; ++i) {
            vertices[i] = std::move(other.vertices[i]);
        }
    }
    return *this;
}

bool Pentagon::operator==(const Pentagon& other) const {
    for (int i = 0; i < 5; ++i) {
        if (vertices[i] != other.vertices[i]) {
            return false;
        }
    }
    return true;
}

double Pentagon::area() const {
    double sum = 0;
    for (int i = 0; i < 5; ++i) {
        auto [x1, y1] = vertices[i];
        auto [x2, y2] = vertices[(i + 1) % 5];
        sum += (x1 * y2 - x2 * y1);
    }
    return std::abs(sum) / 2.0;
}

std::pair<double, double> Pentagon::geometricCenter() const {
    double x_sum = 0, y_sum = 0;
    for (const auto& [x, y] : vertices) {
        x_sum += x;
        y_sum += y;
    }
    return {x_sum / 5, y_sum / 5};
}

void Pentagon::print(std::ostream& out) const {
    for (const auto& [x, y] : vertices) {
        out << "(" << x << ", " << y << ") ";
    }
}

void Pentagon::read(std::istream& in) {
    for (auto& [x, y] : vertices) {
        in >> x >> y;
    }
}

Pentagon::operator double() const {
    return this->area();
}

std::ostream& operator<<(std::ostream& os, const Pentagon& obj) {
    obj.print(os);
    return os;
}

std::istream& operator>>(std::istream& is, Pentagon& obj) {
    obj.read(is);
    return is;
}