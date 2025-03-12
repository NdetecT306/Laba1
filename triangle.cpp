#include <iostream>
#include <cmath>

#include "triangle.h"

using namespace std;

void calculateTriangle(double a, double b, double c) 
{
    double perimeter = a + b + c;// Периметр
    double s = perimeter / 2;// Полупериметр для формулы Герона
    double area = sqrt(s * (s - a) * (s - b) * (s - c));    // Площадь по формуле Герона
    bool isIsosceles = (a == b || b == c || a == c);// Проверка на равнобедренность
    // Вывод результатов
    cout << "Периметр треугольника: " << perimeter << "\n";
    cout << "Площадь треугольника: " << area << "\n"
    if (isIsosceles) 
    {
        cout << "Треугольник равнобедренный.\n";
    } 
    else 
    {
        cout << "Треугольник не равнобедренный.\n";
    }
}

