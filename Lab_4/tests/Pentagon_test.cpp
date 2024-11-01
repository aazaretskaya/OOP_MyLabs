#include <gtest/gtest.h>
#include "Pentagon.h"

TEST(PentagonTest, AreaCalculation) {
    Pentagon<double> pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 1.5 0 1");
    pentagon.read(input);
    double expectedArea = 1.25;

    double actualArea = pentagon.area();

    EXPECT_NEAR(expectedArea, actualArea, 1e-6);
}

TEST(PentagonTest, GeometricCenterCalculation) {
    Pentagon<double> pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 1.5 0 1");
    pentagon.read(input);
    std::pair<double, double> expectedCenter = {0.5, 0.7};

    std::pair<double, double> actualCenter = pentagon.geometricCenter();

    EXPECT_NEAR(expectedCenter.first, actualCenter.first, 1e-6);
    EXPECT_NEAR(expectedCenter.second, actualCenter.second, 1e-6);
}