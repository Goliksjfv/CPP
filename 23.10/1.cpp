#include <iostream>
#include <cmath> // Для использования функции abs

using namespace std;

int main()
{   
    int n=3;
    int array[n][n];
    int i,j;

    cout<<"Введите массив: "<<endl;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>array[i][j];
        }
        
    }
    cout<<"Массив: "<<endl;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<array[i][j]<<' ';
        }
        cout<<endl;
    }

    

    return 0;
}
