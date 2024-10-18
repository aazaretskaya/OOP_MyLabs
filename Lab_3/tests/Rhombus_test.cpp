#include <gtest/gtest.h>
#include "../include/Rhombus.h"

TEST(RhombusTest, AreaCalculation) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    double expectedArea = 2.0;

    input >> rhombus;
    double area = rhombus.area();

    EXPECT_NEAR(area, expectedArea, 1e-6);
}

TEST(RhombusTest, GeometricCenterCalculation) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    std::pair<double, double> expectedCenter = {1.0, 0.0};

    input >> rhombus;
    auto center = rhombus.geometricCenter();

    EXPECT_NEAR(center.first, expectedCenter.first, 1e-6);
    EXPECT_NEAR(center.second, expectedCenter.second, 1e-6);
}

TEST(RhombusTest, PrintToStream) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    std::ostringstream output;
    std::string expectedOutput = "(0, 0) (1, 1) (2, 0) (1, -1) ";

    input >> rhombus;
    output << rhombus;

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(RhombusTest, ReadFromStream) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    std::ostringstream output;
    std::string expectedOutput = "(0, 0) (1, 1) (2, 0) (1, -1) ";

    input >> rhombus;
    output << rhombus;

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(RhombusTest, ConversionToDouble) {
    Rhombus rhombus;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    double expectedArea = 2.0;

    input >> rhombus;
    double area = static_cast<double>(rhombus);

    EXPECT_NEAR(area, expectedArea, 1e-6);
}
