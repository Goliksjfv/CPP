#include <iostream>

using namespace std;

int main()
{
    int array[10];
    int transformedArray[10];
    int zeroCount = 0;    // Счетчик нулевых элементов
    int nonZeroCount = 0; // Счетчик ненулевых элементов
    int i;
    cout<<"Введите массив: "<<endl;
    for (i=0;i<10;i++){
        cin>>array[i];
    }

    // Преобразование массива: сначала нулевые элементы, затем остальные
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == 0)
        {
            transformedArray[zeroCount++] = 0; // Заполняем сначала нулевые элементы
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (array[i] != 0)
        {
            transformedArray[zeroCount + nonZeroCount] = array[i]; // Затем ненулевые элементы
            nonZeroCount++;
        }
    }

    // Вывод преобразованного массива
    cout << "Преобразованный массив: [ ";
    for (int i = 0; i < 10; i++)
    {
        cout << transformedArray[i];
        if (i < 9)
            cout << ", ";
    }
    cout << " ]" << endl;

    return 0;
}
