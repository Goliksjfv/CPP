#include <iostream>
#include <cmath> // Для функции sqrt

using namespace std;

int main()
{
    double a, b, c;
    cout << "Введите коэффициенты a, b и c: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "Это не квадратное уравнение, так как a равно 0." << endl;
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Два различных корня: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        double x = -b / (2 * a);
        cout << "Один корень: x = " << x << endl;
    }
    else
    {
        cout << "Корней нет, дискриминант меньше нуля." << endl;
    }

    return 0;
}
