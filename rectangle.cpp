#include <iostream>
#include <cmath>

#include "rectangle.h"

using namespace std;

void calculateRectangle(double width, double height) {
    // Периметр
    double perimeter = 2 * (width + height);

    // Площадь
    double area = width * height;

    // Длина диагонали
    double diagonal = sqrt(width * width + height * height);

    // Вывод результатов
    cout << "Периметр прямоугольника: " << perimeter << "\n";
    cout << "Площадь прямоугольника: " << area << "\n";
    cout << "Длина диагонали прямоугольника: " << diagonal << "\n";
}
