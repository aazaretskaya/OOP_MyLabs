#include <gtest/gtest.h>
#include "../include/Rhombus.h"

TEST(RhombusTest, AreaCalculation) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    input >> rhombus;

    double area = rhombus.area();

    EXPECT_NEAR(area, 2.0, 1e-6);
}

TEST(RhombusTest, GeometricCenterCalculation) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    input >> rhombus;

    auto center = rhombus.geometricCenter();

    EXPECT_NEAR(center.first, 1.0, 1e-6);
    EXPECT_NEAR(center.second, 0.0, 1e-6);
}


TEST(RhombusTest, PrintToStream) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    input >> rhombus;
    std::ostringstream output;

    output << rhombus;

    EXPECT_EQ(output.str(), "(0, 0) (1, 1) (2, 0) (1, -1) ");
}

TEST(RhombusTest, ReadFromStream) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");

    input >> rhombus;
    std::ostringstream output;
    output << rhombus;

    EXPECT_EQ(output.str(), "(0, 0) (1, 1) (2, 0) (1, -1) ");
}

TEST(RhombusTest, ConversionToDouble) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    input >> rhombus;

    double area = static_cast<double>(rhombus);

    EXPECT_NEAR(area, 2.0, 1e-6);
}

