#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int array[10];
    int newArray[10];
    int newArrayCount = 0;
    srand(time(0));
    cout << "Введите массив"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    cout << " ]" << endl;
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count <= 2)
        {
            newArray[newArrayCount] = array[i];
            newArrayCount++;
        }
    }
    cout << "Измененный массив:   [ ";
    for (int i = 0; i < newArrayCount; i++)
    {
        cout << newArray[i];
        if (i < newArrayCount - 1)
            cout << ", ";
    }
    cout << " ]" << endl;

    return 0;
}