#include <gtest/gtest.h>
#include "../include/Pentagon.h"

TEST(PentagonTest, AreaCalculation) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");
    input >> pentagon;

    double area = pentagon.area();

    EXPECT_NEAR(area, 1.5, 0.0001); 
}

TEST(PentagonTest, GeometricCenterCalculation) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");
    input >> pentagon;

    std::pair<double, double> center = pentagon.geometricCenter();

    EXPECT_NEAR(center.first, 0.5, 0.0001); 
    EXPECT_NEAR(center.second, 0.8, 0.0001); 
}

TEST(PentagonTest, PrintVertices) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");
    input >> pentagon;
    std::ostringstream output;

    output << pentagon;

    EXPECT_EQ(output.str(), "(0, 0) (1, 0) (1, 1) (0.5, 2) (0, 1) ");
}

TEST(PentagonTest, ReadVertices) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");

    input >> pentagon;

    std::ostringstream output;
    output << pentagon;
    EXPECT_EQ(output.str(), "(0, 0) (1, 0) (1, 1) (0.5, 2) (0, 1) ");
}

TEST(PentagonTest, ConversionToDouble) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");
    input >> pentagon;

    double area = static_cast<double>(pentagon);

    EXPECT_NEAR(area, 1.5, 0.0001);
}
