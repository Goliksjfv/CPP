#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Угадай число" << endl;
    srand(time(0));
    int numberGuess =  rand() % 8;
    int PickedNumber;
    while (PickedNumber != numberGuess ){
        cout << "Введи число" << endl;
        cin >> PickedNumber;
        if (PickedNumber == numberGuess)
            break;
    }
    cout << "Угадал" << endl;
    return 0;
}