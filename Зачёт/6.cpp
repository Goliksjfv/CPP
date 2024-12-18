#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randomNumber, guessNumber;

    // Инициализация генератора случайных чисел
    srand(time(0));
    randomNumber = 1 + rand() % 100; // Генерация числа от 1 до 100

    cout << "Я загадал число от 1 до 100. Попробуйте его угадать!" << endl;

    // Цикл do while для получения от пользователя числа до тех пор, пока он не угадает
    do
    {
        cout << "Введите ваше предположение: ";
        cin >> guessNumber;

        if (guessNumber > randomNumber)
        {
            cout << "Загаданное число меньше." << endl;
        }
        else if (guessNumber < randomNumber)
        {
            cout << "Загаданное число больше." << endl;
        }
    } while (guessNumber != randomNumber); // Условие выхода из цикла

    cout << "Поздравляю! Вы угадали число: " << randomNumber << endl;

    return 0;
}
