#include <iostream>

using namespace std;

int main()
{
    int numberFindMaxMin[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Введите " << i + 1 << " число: " << endl;
        cin >> numberFindMaxMin[i];
    }

    int maxElement = numberFindMaxMin[0];
    int minElement = numberFindMaxMin[0];

    for (int i = 1; i < 5; i++)
    {
        if (numberFindMaxMin[i] > maxElement)
        {
            maxElement = numberFindMaxMin[i];
        }
        if (numberFindMaxMin[i] < minElement)
        {
            minElement = numberFindMaxMin[i];
        }
    }

    cout << "Введенные числа: [ ";
    for (int i = 0; i < 5; i++)
    {
        cout << numberFindMaxMin[i];
        if (i < 4)
            cout << ", ";
    }
    cout << " ]" << endl;

    cout << "Максимальный элемент: " << maxElement << endl;
    cout << "Минимальный элемент: " << minElement << endl;

    return 0;
}
