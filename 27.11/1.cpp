#include <iostream>
#include <cstdlib> // Для использования функции rand()
#include <ctime>   // Для инициализации генератора случайных чисел

using namespace std;

// Функция для заполнения массива случайными числами и вывода его на экран
void fillAndPrintArray(int array[], int size)
{
    // Заполняем массив случайными числами от 0 до 50
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 51; // случайные числа от 0 до 50
    }

    // Выводим массив на экран
    cout << "Массив размером " << size << ": [ ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << " ]" << endl;
}

int main()
{
    srand(time(0)); // Инициализация генератора случайных чисел

    // Объявляем два массива разного размера
    const int size1 = 6;
    const int size2 = 5;
    int array1[size1];
    int array2[size2];

    // Заполняем и выводим первый массив
    fillAndPrintArray(array1, size1);

    // Заполняем и выводим второй массив
    fillAndPrintArray(array2, size2);

    return 0;
}
