#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int n,i,min=10000,max=-1;
    cout<<"Сколько человек посетило спротзал за день? ";
    cin>>n;
    int s,sum=0;
    for (i=0;i<n;i++){
        cout<<"Введите возраст посетителя "<<i+1<<": ";
        cin>>s;
        if (s<min){
            min=s;
        }
        if(s>max){
            max=s;
        }
        sum=sum+s;
    }
    cout<<endl<<"Самый молодой посетитель: "<<min<<" лет"<<endl;
    cout<<"Самый старший посетитель: "<<max<<" лет"<<endl;
    cout<<"Средний возраст посетителей: "<<sum/n<<" лет"<<endl;
    return 0;
}