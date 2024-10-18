#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Figure.h"
#include <vector>

class Rhombus : public Figure {
private:
    std::vector<std::pair<double, double>> vertices;
public:
    Rhombus();
    double area() const override;
    std::pair<double, double> geometricCenter() const override;
    void print(std::ostream& out) const override;
    void read(std::istream& in) override;
    operator double() const override;

    friend std::ostream& operator<<(std::ostream& os, const Rhombus& obj);
    friend std::istream& operator>>(std::istream& os, Rhombus& obj);
};

#endif 