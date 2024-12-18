#include <iostream>
#include <cmath> // Для функции sqrt

using namespace std;

int proisved(int one, int two) {
    return one * two;
}

int main()
{
    int one, two;
    cout << "Введите число: " << endl;
    cin >> one;
    cout << "Введите другое число: " << endl;
    cin >> two;
    cout << "Результат = " << proisved(one, two) << endl;
    return 0;
}
