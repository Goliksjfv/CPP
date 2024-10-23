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
    int countOfZero=0;
    int zeros[2];
    cout<<"Введите массив:"<<endl;
    for (i=0;i<n;i++){
        cin>>array[i];
        if(array[i]==0){
            zeros[countOfZero]=i;
            countOfZero++;
        }
    }
    if(countOfZero==2){
        for(i=zeros[0];i<=zeros[1];i++){
        sum=sum+array[i];
        }
        cout<<"Произведение элементов массива расположенных между нулями: "<<sum<<endl;
    } else {
        cout<<0<<endl;
    }
    
    
    return 0;
}