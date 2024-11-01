#include <gtest/gtest.h>
#include "Trapezoid.h"

TEST(TrapezoidTest, AreaCalculation) {
    Trapezoid<double> trapezoid;
    std::istringstream input("0 0 2 0 1 1 2 1");
    trapezoid.read(input);
    double expectedArea = 1.5;

    double actualArea = trapezoid.area();

    EXPECT_NEAR(expectedArea, actualArea, 1e-6);
}

TEST(TrapezoidTest, GeometricCenterCalculation) {
    Trapezoid<double> trapezoid;
    std::istringstream input("0 0 2 0 1 1 1 1");
    trapezoid.read(input);
    std::pair<double, double> expectedCenter = {1.0, 0.5};

    std::pair<double, double> actualCenter = trapezoid.geometricCenter();

    EXPECT_NEAR(expectedCenter.first, actualCenter.first, 1e-6);
    EXPECT_NEAR(expectedCenter.second, actualCenter.second, 1e-6);
}