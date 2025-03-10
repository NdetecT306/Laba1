#include <iostream>
#include <cmath>

#include "circle.h"

using namespace std;

void calculateCircle(double radius, double angle) {
    // Длина окружности
    double circumference = 2 * M_PI * radius;

    // Площадь круга
    double area = M_PI * radius * radius;

    // Площадь кругового сектора
    double sectorArea = (M_PI * radius * radius * angle) / 360.0;

    // Вывод результатов
    cout << "Длина окружности: " << circumference << "\n";
    cout << "Площадь круга: " << area << "\n";
    cout << "Площадь кругового сектора: " << sectorArea << "\n";
}
