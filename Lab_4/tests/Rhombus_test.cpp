#include <gtest/gtest.h>
#include "Rhombus.h"

TEST(RhombusTest, AreaCalculation) {
    Rhombus<double> rhombus;
    std::istringstream input("0 0 1 0 1 1 0 1");
    rhombus.read(input);
    double expectedArea = 1.0;

    double actualArea = rhombus.area();

    EXPECT_NEAR(expectedArea, actualArea, 1e-6);
}

TEST(RhombusTest, GeometricCenterCalculation) {
    Rhombus<double> rhombus;
    std::istringstream input("0 0 1 0 1 1 0 1");
    rhombus.read(input);
    std::pair<double, double> expectedCenter = {0.5, 0.5};

    std::pair<double, double> actualCenter = rhombus.geometricCenter();

    EXPECT_NEAR(expectedCenter.first, actualCenter.first, 1e-6);
    EXPECT_NEAR(expectedCenter.second, actualCenter.second, 1e-6);
}