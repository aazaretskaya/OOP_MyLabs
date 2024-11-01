#ifndef PENTAGON_H
#define PENTAGON_H

#include "Figure.h"

template <Scalar T>
class Pentagon : public Figure<T> {
private:
    std::unique_ptr<Point<T>> vertices[5];
public:
    Pentagon();
    Pentagon(const Pentagon& other);
    Pentagon(Pentagon&& other) noexcept;
    Pentagon& operator=(const Pentagon& other);
    Pentagon& operator=(Pentagon&& other) noexcept;
    bool operator==(const Pentagon& other) const;

    double area() const override;
    std::pair<T, T> geometricCenter() const override;
    void print(std::ostream& out) const override;
    void read(std::istream& in) override;
    operator double() const override;

    friend std::ostream& operator<<(std::ostream& os, const Pentagon<T>& obj) {
        obj.print(os);
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Pentagon<T>& obj) {
        obj.read(is);
        return is;
    }
};

#endif