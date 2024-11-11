#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n, m;
    cout << "Введите количество строк: ";
    cin >> n;
    cout << endl;
    cout << "Введите количество столбцов: ";
    cin >> m;
    cout << endl;
    int array1[n][m];
    int array2[(n*m/4)+1][4];
    int z = 1;
    cout << "Изначальный массив: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            array1[i][j] = z;
            z++; 
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    z=1;
    for (int i = 0; i < (n*m/4)+1; i++) {   
            for (int j = 0; j < 4; j++) {
                if(z<=n*m){
                    array2[i][j]=z;
                }
                z++;
            }
    }
    cout << "Массив змейкой: "<<endl;
    z=1;
    for (int i = 0; i < (n*m/4)+1; i++) {   
        if(i%2==0){
            for (int j = 0; j < 4; j++) {
                if(z<=n*m){
                    cout << array2[i][j] << " ";
                }
                z++;
            }
        }
        if(i%2!=0){
            for (int j = 4-1; j>=0; j--) {
                if(z<=n*m){
                    cout << array2[i][j] << " ";
                }
                z++;
            }
        }
        cout << endl;
    }
    return 0;
}