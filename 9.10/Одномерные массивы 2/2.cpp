#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int n = 10;
    int i;
    int array[n];
    int min=1000000;
    cout<<"Введите массив:"<<endl;
    for (i=0;i<n;i++){
        cin>>array[i];
        if(array[i]%2==0){
            if(array[i]<min){
            min=array[i];
            }
        }
    }
    if (min==1000000){
        cout<<endl<<array[0]<<endl;
    } else cout<<"Минимальный чётный элемент массива: "<<min<<endl;
    return 0;
}