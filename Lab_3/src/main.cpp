#include <iostream>
#include <utility> 
#include "Pentagon.h"
#include "Rhombus.h"
#include "Trapezoid.h"

std::ostream& operator<<(std::ostream& os, const std::pair<double, double>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

int main() {
    Figure** figures = nullptr; 
    int capacity = 0;
    int size = 0; 
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
            if (size == capacity) {
                capacity = capacity == 0 ? 1 : capacity * 2;
                Figure** newFigures = new Figure*[capacity];
                for (int i = 0; i < size; ++i) {
                    newFigures[i] = figures[i];
                }
                delete[] figures;
                figures = newFigures;
            }
            figures[size] = new Pentagon();
            std::cin >> *dynamic_cast<Pentagon*>(figures[size]);
            ++size;
        } else if (choice == 2) {
            if (size == capacity) {
                capacity = capacity == 0 ? 1 : capacity * 2;
                Figure** newFigures = new Figure*[capacity];
                for (int i = 0; i < size; ++i) {
                    newFigures[i] = figures[i];
                }
                delete[] figures;
                figures = newFigures;
            }
            figures[size] = new Rhombus();
            std::cin >> *dynamic_cast<Rhombus*>(figures[size]);
            ++size;
        } else if (choice == 3) {
            if (size == capacity) {
                capacity = capacity == 0 ? 1 : capacity * 2;
                Figure** newFigures = new Figure*[capacity];
                for (int i = 0; i < size; ++i) {
                    newFigures[i] = figures[i];
                }
                delete[] figures;
                figures = newFigures;
            }
            figures[size] = new Trapezoid();
            std::cin >> *dynamic_cast<Trapezoid*>(figures[size]);
            ++size;
        } else if (choice == 4) {
            for (int i = 0; i < size; ++i) {
                std::cout << "Area: " << figures[i]->area() << ", Center: " << figures[i]->geometricCenter() << "\n";
            }
        } else if (choice == 5) {
            double totalArea = 0;
            for (int i = 0; i < size; ++i) {
                totalArea += figures[i]->area();
            }
            std::cout << "Total area: " << totalArea << "\n";
        } else if (choice == 6) {
            int index;
            std::cout << "Enter index to delete: ";
            std::cin >> index;
            if (index >= 0 && index < size) {
                delete figures[index];
                for (int i = index; i < size - 1; ++i) {
                    figures[i] = figures[i + 1];
                }
                --size;
            } else {
                std::cout << "Invalid index\n";
            }
        } else if (choice == 7) {
            break;
        } else {
            std::cout << "Invalid choice\n";
        }
    }

    for (int i = 0; i < size; ++i) {
        delete figures[i];
    }
    delete[] figures;

    return 0;
}