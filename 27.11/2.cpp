#include <iostream>
#include <cstdlib> // Для использования функции rand()
#include <ctime>   // Для инициализации генератора случайных чисел

using namespace std;

const int ROWS = 5;
const int COLS = 5;

// Функция для заполнения двумерного массива случайными числами от 30 до 60
void fill2DArray(int array[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            array[i][j] = 30 + rand() % 31; // числа от 30 до 60
        }
    }
}

// Функция для вывода двумерного массива на экран
void print2DArray(int array[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

// Функция для нахождения максимального элемента в двумерном массиве
int findMax2D(int array[ROWS][COLS])
{
    int maxElement = array[0][0];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (array[i][j] > maxElement)
            {
                maxElement = array[i][j];
            }
        }
    }
    return maxElement;
}

// Функция для нахождения минимального элемента в двумерном массиве
int findMin2D(int array[ROWS][COLS])
{
    int minElement = array[0][0];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (array[i][j] < minElement)
            {
                minElement = array[i][j];
            }
        }
    }
    return minElement;
}

int main()
{
    srand(time(0)); // Инициализация генератора случайных чисел

    // Объявляем двумерный массив
    int array[ROWS][COLS];

    // Заполняем двумерный массив случайными числами
    fill2DArray(array);

    // Выводим массив на экран
    cout << "Двумерный массив 5x5:" << endl;
    print2DArray(array);

    // Находим и выводим максимальный элемент
    int maxElement = findMax2D(array);
    cout << "Максимальный элемент: " << maxElement << endl;

    // Находим и выводим минимальный элемент
    int minElement = findMin2D(array);
    cout << "Минимальный элемент: " << minElement << endl;

    return 0;
}
