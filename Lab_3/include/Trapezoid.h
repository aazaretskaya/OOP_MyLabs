#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Figure.h"

class Trapezoid : public Figure {
private:
    std::pair<double, double> vertices[4];
public:
    Trapezoid();
    double area() const override;
    std::pair<double, double> geometricCenter() const override;
    void print(std::ostream& out) const override;
    void read(std::istream& in) override;
    operator double() const override;

    friend std::ostream& operator<<(std::ostream& os, const Trapezoid& obj);
    friend std::istream& operator>>(std::istream& is, Trapezoid& obj);
};

#endif