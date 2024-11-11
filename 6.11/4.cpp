#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n, m;
    srand(time(0));
    cout << "Введите количество строк: ";
    cin >> n;
    cout << endl;
    cout << "Введите количество столбцов: ";
    cin >> m;
    cout << endl;
    int array1[n][m];
    int array2[m][n];
    int k,index=0,s;
    cout << "Места: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array1[i][j] = 0 + rand() % 2; 
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout<<"Введите количество билетов: ";
    cin>>k;
    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<m;j++){
            if(array1[i][j]==0){
                s++;
                if(s==k&&index==0){
                    cout<<k<<" мест доступно в ряду"<<i+1<<endl;
                    index++;
                }
            }
            if(array1[i][j]!=0){
                s=0;
            }
        }
    }
    return 0;
}