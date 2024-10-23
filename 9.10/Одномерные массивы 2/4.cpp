#include <iostream>

using namespace std;

int main()
{
    int array[10];
    int minIndex = 0;                                   // Индекс минимального элемента
    int maxIndex = 0;
    int i;                                   // Индекс максимального элемента

    cout<<"Введите массив: "<<endl;
    for (i=0;i<10;i++){
        cin>>array[i];
    }

    // Поиск индексов минимального и максимального элементов
    for (int i = 1; i < 10; i++)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }

    int sumOfIndices = minIndex + maxIndex; // Сумма индексов минимального и максимального элементов

    
    // Вывод результатов
    cout << "Минимальный элемент: " << array[minIndex] << " (Индекс: " << minIndex << ")" << endl;
    cout << "Максимальный элемент: " << array[maxIndex] << " (Индекс: " << maxIndex << ")" << endl;
    cout << "Сумма индексов минимального и максимального элементов: " << sumOfIndices << endl;

    return 0;
}
