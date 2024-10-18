#include <gtest/gtest.h>
#include "../include/Pentagon.h"

TEST(PentagonTest, AreaCalculation) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");
    double expectedArea = 1.5;

    input >> pentagon;
    double area = pentagon.area();

    EXPECT_NEAR(area, expectedArea, 0.0001);
}

TEST(PentagonTest, GeometricCenterCalculation) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");
    std::pair<double, double> expectedCenter = {0.5, 0.8};

    input >> pentagon;
    std::pair<double, double> center = pentagon.geometricCenter();

    EXPECT_NEAR(center.first, expectedCenter.first, 0.0001);
    EXPECT_NEAR(center.second, expectedCenter.second, 0.0001);
}

TEST(PentagonTest, PrintVertices) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");
    std::ostringstream output;
    std::string expectedOutput = "(0, 0) (1, 0) (1, 1) (0.5, 2) (0, 1) ";

    input >> pentagon;
    output << pentagon;

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(PentagonTest, ReadVertices) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");
    std::ostringstream output;
    std::string expectedOutput = "(0, 0) (1, 0) (1, 1) (0.5, 2) (0, 1) ";

    input >> pentagon;
    output << pentagon;

    EXPECT_EQ(output.str(), expectedOutput);
}

TEST(PentagonTest, ConversionToDouble) {
    Pentagon pentagon;
    std::istringstream input("0 0 1 0 1 1 0.5 2 0 1");
    double expectedArea = 1.5;

    input >> pentagon;
    double area = static_cast<double>(pentagon);

    EXPECT_NEAR(area, expectedArea, 0.0001);
}
