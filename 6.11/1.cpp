#include <iostream>
#include <cmath> // Для использования функции abs

using namespace std;

int main()
{   
    int n,m;
    int i,j;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << endl;
    cout << "Введите количество столбцов: ";
    cin >> m;
    cout << endl;
    int array1[n][m], array2[m][n];
    cout<<"Введите массив:x"<<endl;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            cin>>array1[i][j];
        }
    }
    cout<<"Изначальный массив:"<<endl;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Перевёрнутый массив:"<<endl;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            array2[i][j]=array1[j][i];
            cout<<array2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
