#include <iostream>
#include <memory>
#include <vector>
#include "Pentagon.h"
#include "Rhombus.h"
#include "Trapezoid.h"

std::ostream& operator<<(std::ostream& os, const std::pair<double, double>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

int main() {
    std::vector<std::shared_ptr<Figure<double>>> figures;
    int choice;

    while (true) {
        std::cout << "1. Add Pentagon\n";
        std::cout << "2. Add Rhombus\n";
        std::cout << "3. Add Trapezoid\n";
        std::cout << "4. Print all figures\n";
        std::cout << "5. Calculate total area\n";
        std::cout << "6. Delete figure by index\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            auto pentagon = std::make_shared<Pentagon<double>>();
            std::cin >> *pentagon;
            figures.push_back(pentagon);
        } else if (choice == 2) {
            auto rhombus = std::make_shared<Rhombus<double>>();
            std::cin >> *rhombus;
            figures.push_back(rhombus);
        } else if (choice == 3) {
            auto trapezoid = std::make_shared<Trapezoid<double>>();
            std::cin >> *trapezoid;
            figures.push_back(trapezoid);
        } else if (choice == 4) {
            for (const auto& figure : figures) {
                std::cout << "Area: " << figure->area() << ", Center: " << figure->geometricCenter() << "\n";
            }
        } else if (choice == 5) {
            double totalArea = 0;
            for (const auto& figure : figures) {
                totalArea += figure->area();
            }
            std::cout << "Total area: " << totalArea << "\n";
        } else if (choice == 6) {
            int index;
            std::cout << "Enter index to delete: ";
            std::cin >> index;
            if (index >= 0 && index < figures.size()) {
                figures.erase(figures.begin() + index);
            } else {
                std::cout << "Invalid index\n";
            }
        } else if (choice == 7) {
            break;
        } else {
            std::cout << "Invalid choice\n";
        }
    }

    return 0;
}