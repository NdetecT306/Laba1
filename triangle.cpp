#include <iostream>
#include <math.h>
using namespace std;
enum Operation
{
    Perimeter,
    Square,
    Isosceles,
};
int main()
{
    setlocale(LC_ALL,"RUS");
    int numOperat;
    cout << "Выберите операцию:\n0:Посчитать периметр;\n1:Посчитать площадь по формуле Герона;\n2:проверить на равнобедренность." << endl;
    cin >> numOperat;
    double a, b, c, p, s;
    cout << "Введите данные:";
    cin >> a >> b >> c;
    while (a <= 0 || b <= 0 || c <= 0)
    {
        cout << "Введеные значения не подходят. Попробуйте еще раз.\nВведите данные:";
        cin >> a >> b >> c;
    }
    switch (numOperat)
    {
    case (Operation::Perimeter):
        p = a + b + c;
        cout << "Периметр равен:" << p;
        break;
    case (Operation::Square):
        p = (a + b + c)/2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Площадь равна:" << s;
        break;
    case (Operation::Isosceles):
        if (a != b && a != c && b != c)
            cout << "Нет, треугольник не равнобедренный";
        else
        {
            cout << "Да, треугольник равнобедренный";
        }
        break;
    default:
        cout << "Не найдена такая операция";
        break;
    }
}
