#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int n = 10;
    int i;
    int array[n];
    int sum=0;
    cout<<"Введите массив:"<<endl;
    for (i=0;i<n;i++){
        cin>>array[i];
        if(array[i]<0){
            sum=sum+array[i];
        }
    }
    cout<<"Сумма отрицатеьльных элементов массива: "<<sum<<endl;
    return 0;
}