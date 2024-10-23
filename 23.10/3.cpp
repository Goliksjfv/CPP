#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int n = 3;
    int array[n][n];
    int maxSum=-1;
    int sum;
    int index;
    srand(time(0));
    for (int i = 0; i < 3; i++){
        sum=0;
        for (int j = 0; j < 3; j++){
            array[i][j] = 10 + rand() % 90; 
            cout<<array[i][j]<<" ";
            sum=sum+array[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            index=i+1;
        }
        cout << endl;
    }
    cout<<"Номер строки с максимальной суммой элементов: "<<index<<endl;
    return 0;
}