#ifndef PENTAGON_H
#define PENTAGON_H

#include "Figure.h"

class Pentagon : public Figure {
private:
    std::pair<double, double> vertices[5];
public:
    Pentagon();
    Pentagon(const Pentagon& other);
    Pentagon(Pentagon&& other) noexcept;
    Pentagon& operator=(const Pentagon& other);
    Pentagon& operator=(Pentagon&& other) noexcept;
    bool operator==(const Pentagon& other) const;

    double area() const override;
    std::pair<double, double> geometricCenter() const override;
    void print(std::ostream& out) const override;
    void read(std::istream& in) override;
    operator double() const override;

    friend std::ostream& operator<<(std::ostream& os, const Pentagon& obj);
    friend std::istream& operator>>(std::istream& os, Pentagon& obj);
};

#endif