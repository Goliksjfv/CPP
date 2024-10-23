#include <iostream>
#include <cmath> // Для использования функции abs

using namespace std;

int main()
{   
    int n;
    int i,j;
    int sum1,sum2;
    cout<<"Введите нечётное n: ";
    cin>>n;
    if(n%2==0){
        cout<<"Число чётное!"<<endl;;
    } else {
        string array[n][n];
        for (i=0;i<n;i++){
            for(j=0;j<n;j++){
                array[i][j]=".";
            }
        }
        for (j=0;j<n;j++){
            array[n/2][j]="*";
            array[j][n/2]="*";
            array[j][j]="*";
            array[j][n-1-j]="*";
        }
        for (i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    

   
    return 0;
}
