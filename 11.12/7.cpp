#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isPointInCube(double x, double y)
{
    return (x < 1 && x > -1 && y < 1 && y > -1);
}

int main()
{
    double x, y;
    cout << "Введите x: ";
    cin >> x;
    cout << endl
         << "Введите y: ";
    cin >> y;
    if (isPointInCube(x, y))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}