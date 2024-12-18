#include <iostream>
#include <cmath> // Для функции sqrt

using namespace std;

int main()
{
    const int pass = 12345678;
    int userPass;
   
    while (userPass != pass)
    {
        cout << "Введите пароль" << endl;
        cin >> userPass;
    }

    return 0;
}
