#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Figure.h"

class Rhombus : public Figure {
private:
    std::pair<double, double> vertices[4];
public:
    Rhombus();
    Rhombus(const Rhombus& other);
    Rhombus(Rhombus&& other) noexcept;
    Rhombus& operator=(const Rhombus& other);
    Rhombus& operator=(Rhombus&& other) noexcept;
    bool operator==(const Rhombus& other) const;

    double area() const override;
    std::pair<double, double> geometricCenter() const override;
    void print(std::ostream& out) const override;
    void read(std::istream& in) override;
    operator double() const override;

    friend std::ostream& operator<<(std::ostream& os, const Rhombus& obj);
    friend std::istream& operator>>(std::istream& os, Rhombus& obj);
};

#endif