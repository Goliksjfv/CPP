#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int n,s;
    while(true){
        cout<<"Введите число, чтобы завершить программу, введите 0"<<endl;
        cin>>n;
        if (n==0){
            break;
        }
        cout<<"Квадрат числа: "<<n*n<<endl;
    }
    return 0;
}