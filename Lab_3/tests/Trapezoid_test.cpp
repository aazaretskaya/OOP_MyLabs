#include <gtest/gtest.h>
#include "../include/Trapezoid.h"

TEST(TrapezoidTest, AreaCalculation) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 2 1");
    double expectedArea = 1.5;

    input >> trapezoid;
    double area = trapezoid.area();

    EXPECT_NEAR(area, expectedArea, 1e-6);
}

TEST(TrapezoidTest, GeometricCenterCalculation) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 1 0");
    std::pair<double, double> expectedCenter = {1.0, 0.25};

    input >> trapezoid;
    auto center = trapezoid.geometricCenter();

    EXPECT_NEAR(center.first, expectedCenter.first, 1e-6);
    EXPECT_NEAR(center.second, expectedCenter.second, 1e-6);
}

TEST(TrapezoidTest, PrintToStream) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 1 0");
    std::ostringstream output;
    std::string expectedOutput = "(0, 0) (2, 0) (1, 1) (1, 0) ";

    input >> trapezoid;
    output << trapezoid;

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(TrapezoidTest, ReadFromStream) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 1 0");
    std::ostringstream output;
    std::string expectedOutput = "(0, 0) (2, 0) (1, 1) (1, 0) ";

    input >> trapezoid;
    output << trapezoid;

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(TrapezoidTest, ConversionToDouble) {
    Trapezoid trapezoid;
    std::istringstream input("0 0 2 0 1 1 2 1");
    double expectedArea = 1.5;

    input >> trapezoid;
    double area = static_cast<double>(trapezoid);

    EXPECT_NEAR(area, expectedArea, 1e-6);
}
