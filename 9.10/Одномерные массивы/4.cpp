#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int n = 10;
    int i;
    int array[n];
    int sum=1;
    cout<<"Введите массив:"<<endl;
    for (i=0;i<n;i++){
        cin>>array[i];
        if((i+1)%2!=0){
            sum=sum*array[i];
        }
    }
    cout<<"Произведение элементов массива с нечётными номерами: "<<sum<<endl;
    return 0;
}