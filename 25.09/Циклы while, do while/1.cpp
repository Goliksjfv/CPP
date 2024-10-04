#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    float i=0,s,sum=0;
    while (s!=0){
        cin>>s;
        sum=sum+s;
        i++;
    }
    i--;
    cout<<"Количество чисел: "<<i<<endl;
    cout<<"Сумма чисел: "<<sum<<endl;
    cout<<"Среднее арифметическое: "<<sum/i<<endl;

    return 0;
}