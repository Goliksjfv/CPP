#include <iostream>

using namespace std;

int main()
{
    int hour;
    cout << "Введите число от 0 до 23: ";
    cin >> hour;

    if (hour < 0 || hour > 23)
    {
        cout << "Некорректный ввод. Введите число от 0 до 23." << endl;
        return 0;
    }

    if (hour >= 5 && hour < 12)
    {
        cout << "Утро" << endl;
    }
    else if (hour >= 12 && hour < 17)
    {
        cout << "День" << endl;
    }
    else if (hour >= 17 && hour < 21)
    {
        cout << "Вечер" << endl;
    }
    else
    {
        cout << "Ночь" << endl;
    }

    return 0;
}
