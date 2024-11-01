#ifndef POINT_H
#define POINT_H

#include <concepts>
#include <iostream>
#include <memory>

template <typename T>
concept Scalar = std::is_arithmetic<T>::value;

template <Scalar T>
class Point {
public:
    Point() : x(0), y(0) {}
    Point(T x = 0, T y = 0) : x(x), y(y) {}

    T getX() const { return x; }
    T getY() const { return y; }

    void setX(T x) { this->x = x; }
    void setY(T y) { this->y = y; }

    bool operator==(const Point<T>& other) const {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Point<T>& other) const {
        return !(*this == other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Point<T>& point) {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Point<T>& point) {
        is >> point.x >> point.y;
        return is;
    }

public:
    T x, y;
};

#endif 