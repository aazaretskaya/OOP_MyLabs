#include <iostream>
#include "box_capacity.h"

using namespace std;

int main() {
    int length; 
    int width;
    int height;

    cout << "Введите длину склада в футах: " << endl;
    cin >> length;
    cout << "Введите ширину склада в футах: " << endl;
    cin >> width;
    cout << "Введите высоту склада в футах: " << endl;
    cin >> height;
    
    int capacity = box_capacity(length, width, height);
    cout << "Количество ящиков, которые можно хранить на складе: " << capacity << endl;

    return 0;
}