#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <memory>
#include "Point.h"

template <Scalar T>
class Figure {
public:
    virtual double area() const = 0;
    virtual std::pair<T, T> geometricCenter() const = 0;
    virtual void print(std::ostream& out) const = 0;
    virtual void read(std::istream& in) = 0;
    virtual ~Figure() = default;
    virtual operator double() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Figure<T>& figure) {
        figure.print(os);
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Figure<T>& figure) {
        figure.read(is);
        return is;
    }
};

#endif