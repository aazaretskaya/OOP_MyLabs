#include <gtest/gtest.h>
#include <sstream>
#include "Pentagon.h"
#include "Rhombus.h"
#include "Trapezoid.h"

std::ostream& operator<<(std::ostream& os, const std::pair<double, double>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

TEST(MainTest, AddFigure) {
    const int maxFigures = 10;
    Figure* figures[maxFigures] = {nullptr};
    int figureCount = 0;
    std::istringstream input("0 0 1 1 2 0 1 -1");
    Rhombus* rhombus = new Rhombus();
    double expectedArea = 2.0;

    input >> *rhombus;
    figures[figureCount++] = rhombus;

    ASSERT_EQ(figureCount, 1);
    EXPECT_NEAR(figures[0]->area(), expectedArea, 1e-6);
}

TEST(MainTest, CalculateTotalArea) {
    const int maxFigures = 10;
    Figure* figures[maxFigures] = {nullptr};
    int figureCount = 0;
    std::istringstream input1("0 0 1 1 2 0 1 -1");
    std::istringstream input2("0 0 2 0 1 1 2 1");
    Rhombus* rhombus = new Rhombus();
    Trapezoid* trapezoid = new Trapezoid();
    double expectedTotalArea = 3.5;

    input1 >> *rhombus;
    input2 >> *trapezoid;
    figures[figureCount++] = rhombus;
    figures[figureCount++] = trapezoid;

    double totalArea = 0;
    for (int i = 0; i < figureCount; ++i) {
        totalArea += figures[i]->area();
    }

    EXPECT_NEAR(totalArea, expectedTotalArea, 1e-6);
}

TEST(MainTest, DeleteFigureByIndex) {
    const int maxFigures = 10;
    Figure* figures[maxFigures] = {nullptr};
    int figureCount = 0;
    std::istringstream input1("0 0 1 0 0.5 1 0.5 0");
    std::istringstream input2("0 0 2 0 1 1 2 1");
    Rhombus* rhombus = new Rhombus();
    Trapezoid* trapezoid = new Trapezoid();
    double expectedRemainingArea = 1.5;

    input1 >> *rhombus;
    input2 >> *trapezoid;
    figures[figureCount++] = rhombus;
    figures[figureCount++] = trapezoid;

    delete figures[0];
    figures[0] = nullptr;
    for (int i = 0; i < figureCount - 1; ++i) {
        figures[i] = figures[i + 1];
    }
    --figureCount;

    ASSERT_EQ(figureCount, 1);
    EXPECT_NEAR(figures[0]->area(), expectedRemainingArea, 1e-6);
}

TEST(MainTest, PrintFigures) {
    const int maxFigures = 10;
    Figure* figures[maxFigures] = {nullptr};
    int figureCount = 0;
    std::istringstream input1("0 0 1 1 2 0 1 -1");
    std::istringstream input2("0 0 2 0 1 1 2 1");
    Rhombus* rhombus = new Rhombus();
    Trapezoid* trapezoid = new Trapezoid();
    std::ostringstream output;
    std::string expectedOutput = "Area: 2, Center: (1, 0)\nArea: 1.5, Center: (1.25, 0.5)\n";

    input1 >> *rhombus;
    input2 >> *trapezoid;
    figures[figureCount++] = rhombus;
    figures[figureCount++] = trapezoid;

    for (int i = 0; i < figureCount; ++i) {
        output << "Area: " << figures[i]->area() << ", Center: " << figures[i]->geometricCenter() << "\n";
    }

    EXPECT_EQ(output.str(), expectedOutput);
}
