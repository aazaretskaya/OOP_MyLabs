#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Figure.h"

template <Scalar T>
class Trapezoid : public Figure<T> {
private:
    std::unique_ptr<Point<T>> vertices[4];
public:
    Trapezoid();
    Trapezoid(const Trapezoid& other);
    Trapezoid(Trapezoid&& other) noexcept;
    Trapezoid& operator=(const Trapezoid& other);
    Trapezoid& operator=(Trapezoid&& other) noexcept;
    bool operator==(const Trapezoid& other) const;

    double area() const override;
    std::pair<T, T> geometricCenter() const override;
    void print(std::ostream& out) const override;
    void read(std::istream& in) override;
    operator double() const override;

    friend std::ostream& operator<<(std::ostream& os, const Trapezoid<T>& obj) {
        obj.print(os);
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Trapezoid<T>& obj) {
        obj.read(is);
        return is;
    }
};

#endif 