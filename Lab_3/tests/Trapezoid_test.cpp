#include <gtest/gtest.h>
#include "../include/Trapezoid.h"

TEST(TrapezoidTest, AreaCalculation) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 2 1");
    input >> trapezoid;

    double area = trapezoid.area();

    EXPECT_NEAR(area, 1.5, 1e-6);
}

TEST(TrapezoidTest, GeometricCenterCalculation) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 1 0");
    input >> trapezoid;

    auto center = trapezoid.geometricCenter();

    EXPECT_NEAR(center.first, 1.0, 1e-6);
    EXPECT_NEAR(center.second, 0.25, 1e-6);
}

TEST(TrapezoidTest, PrintToStream) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 1 0");
    input >> trapezoid;
    std::ostringstream output;

    output << trapezoid;

    EXPECT_EQ(output.str(), "(0, 0) (2, 0) (1, 1) (1, 0) ");
}

TEST(TrapezoidTest, ReadFromStream) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 1 0");

    input >> trapezoid;
    std::ostringstream output;
    output << trapezoid;

    EXPECT_EQ(output.str(), "(0, 0) (2, 0) (1, 1) (1, 0) ");
}

TEST(TrapezoidTest, ConversionToDouble) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 2 1");
    input >> trapezoid;

    double area = static_cast<double>(trapezoid);

    EXPECT_NEAR(area, 1.5, 1e-6);
}

