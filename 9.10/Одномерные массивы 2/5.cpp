#include <iostream>
#include <cmath> // Для использования функции abs

using namespace std;

int main()
{
    int array[10];
    int i;
    int minAbsIndex = 0;                                   // Индекс элемента с минимальным значением по модулю

    cout<<"Введите массив: "<<endl;
    for (i=0;i<10;i++){
        cin>>array[i];
    }

    // Поиск индекса элемента с минимальным значением по модулю
    for (int i = 1; i < 10; i++)
    {
        if (abs(array[i]) < abs(array[minAbsIndex]))
        {
            minAbsIndex = i;
        }
    }

   

    // Вывод результата
    cout << "Минимальный по модулю элемент: " << array[minAbsIndex] << " (Индекс: " << minAbsIndex << ")" << endl;

    return 0;
}
