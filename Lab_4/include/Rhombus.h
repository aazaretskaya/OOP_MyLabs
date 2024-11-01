#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Figure.h"

template <Scalar T>
class Rhombus : public Figure<T> {
private:
    std::unique_ptr<Point<T>> vertices[4];
public:
    Rhombus();
    Rhombus(const Rhombus& other);
    Rhombus(Rhombus&& other) noexcept;
    Rhombus& operator=(const Rhombus& other);
    Rhombus& operator=(Rhombus&& other) noexcept;
    bool operator==(const Rhombus& other) const;

    double area() const override;
    std::pair<T, T> geometricCenter() const override;
    void print(std::ostream& out) const override;
    void read(std::istream& in) override;
    operator double() const override;

    friend std::ostream& operator<<(std::ostream& os, const Rhombus<T>& obj) {
        obj.print(os);
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Rhombus<T>& obj) {
        obj.read(is);
        return is;
    }
};

#endif 