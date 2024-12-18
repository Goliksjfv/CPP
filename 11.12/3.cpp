#include <iostream>
#include <cmath>
using namespace std;

double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты первой вершины (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины (x3 y3): ";
    cin >> x3 >> y3;
    double S = area(x1, y1, x2, y2, x3, y3);
    cout << "Площадь треугольника: " << S << endl;

    return 0;
}