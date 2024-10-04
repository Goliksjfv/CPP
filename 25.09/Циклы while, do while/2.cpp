#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int a,b,s=0,i;
    cout<<"Введите диапазон чисел:"<<endl;
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++){
        if(i%2!=0){
            s=s+i;
        }
    }
    cout<<"Сумма нечётных чисел в диапазоне: "<<s<<endl;
    return 0;
}