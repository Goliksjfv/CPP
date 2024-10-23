#include <iostream>
#include <cmath> // Для использования функции abs

using namespace std;

int main()
{   
    int n=3;
    int array[n][n];
    int i,j;
    int sum1,sum2;

    cout<<"Введите массив: "<<endl;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>array[i][j];
        }
        
    }
    cout<<"Массив: "<<endl;
    for (i=0;i<n;i++){
        sum1=0;
        sum2=0;
        for(j=0;j<n;j++){
            cout<<array[i][j]<<' ';
            sum1=sum1+array[i][j];
            sum2=sum2+array[j][i];
        }
        cout<<"Сумма строки "<<i+1<<": "<<sum1<<" Сумма столбца "<<i+1<<": "<<sum2<<endl;
    }
    return 0;
}
