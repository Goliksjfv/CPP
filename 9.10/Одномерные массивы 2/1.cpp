#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int n = 10;
    int i;
    int array[n];
    int max=0;
    cout<<"Введите массив:"<<endl;
    for (i=0;i<n;i++){
        cin>>array[i];
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<"Максимальный элемент массива: "<<max<<endl;
    return 0;
}