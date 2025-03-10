#include <iostream>

#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main() {
  while (true){
    cout << "Выберите фигуру:" << endl;
    cout << "1) Прямоугольник" << endl;
    cout << "2) Треугольник" << endl;
    cout << "3) Окружность" << endl;
    cout << "Любой другой вариант - выход из программы." << endl;
    cout << "Ваш выбор: ";

    int selectedFugire;
    cin >> selectedFugire;

    switch (selectedFugire) {
      case 1: {
        double width, height;
        cout << "Введите ширину и высоту прямоугольника: ";
        cin >> width >> height;
        calculateRectangle(width, height);
        break;
      }
      case 2: {
        double a, b, c;
        cout << "Введите длины сторон треугольника: ";
        cin >> a >> b >> c;
        calculateTriangle(a, b, c);
        break;
      }
      case 3: {
        double radius, angle;
        cout << "Введите радиус окружности и угол сектора в градусах: ";
        cin >> radius >> angle;
        calculateCircle(radius, angle);
        break;
      }
      default:
        return 0;
    }
    cout << endl << endl;
  }
}