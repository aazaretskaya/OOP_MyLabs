#include <iostream>
#include <vector>
#include <utility> // Для std::pair
#include "Pentagon.h"
#include "Rhombus.h"
#include "Trapezoid.h"

// Перегрузка оператора << для std::pair<double, double>
std::ostream& operator<<(std::ostream& os, const std::pair<double, double>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

int main() {
    std::vector<Figure*> figures;
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
            Pentagon* pentagon = new Pentagon();
            std::cin >> *pentagon;
            figures.push_back(pentagon);
        } else if (choice == 2) {
            Rhombus* rhombus = new Rhombus();
            std::cin >> *rhombus;
            figures.push_back(rhombus);
        } else if (choice == 3) {
            Trapezoid* trapezoid = new Trapezoid();
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
                delete figures[index];
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

    for (auto& figure : figures) {
        delete figure;
    }

    return 0;
}