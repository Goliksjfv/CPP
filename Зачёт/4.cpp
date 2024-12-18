#include <iostream>
#include <cmath> // Для функции sqrt

using namespace std;

int main()
{
    int num;
    bool isPrime = true;

    cout << "Введите число: ";
    cin >> num;

    if (num < 2)
    {
        cout << "Число не является простым." << endl;
        return 0;
    }

    // Проверка делимости от 2 до квадратного корня из числа
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Число простое." << endl;
    }
    else
    {
        cout << "Число не является простым." << endl;
    }

    return 0;
}
