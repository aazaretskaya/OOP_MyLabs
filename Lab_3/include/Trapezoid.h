#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Figure.h"
#include <vector>

class Trapezoid : public Figure {
private:
    std::vector<std::pair<double, double>> vertices;
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