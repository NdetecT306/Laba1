#include <iostream>
#include <cmath>
#include "triangle.h"
using namespace std;

void calculateTriangle(double a, double b, double c) 
{
    while(a<0 || b<0 || c<0)
    {
	cout << "Неправильные значения. Попробуйте снова."<<endl;
	cout <<"Введите значения:"<< endl;
	cin >> a >> b >> c;
    }
    double max = 0, sum = 0;
    if(a<=c && b <=c)
    {
	max = c;
	sum = a + b;
    }
    else if(c<=a && b<=a)
    {
	max = a;
	sum = b + c;
    }
    else if(c<=b && a<=b)
    {
	max = b;
	sum = a + c;
    }
    if(sum < max)
    {
	cout << "Такого треугольника не существует."<<endl;
	return;
    }
    double perimeter = a + b + c;// Периметр
    double s = perimeter / 2;// Полупериметр для формулы Герона
    double area = sqrt(s * (s - a) * (s - b) * (s - c));    // Площадь по формуле Герона
    bool isIsosceles = (a == b || b == c || a == c);// Проверка на равнобедренность
    // Вывод результатов
    cout << "Периметр треугольника: " << perimeter << "\n";
    cout << "Площадь треугольника: " << area << "\n";
    if (isIsosceles) 
    {
        cout << "Треугольник равнобедренный.\n";
    } 
    else 
    {
        cout << "Треугольник не равнобедренный.\n";
    }
}

