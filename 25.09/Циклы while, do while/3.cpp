#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int a,b,s=0,i,j,z;
    cout<<"Введите высоту треугольника: "<<endl;
    cin>>a;
    for(i=1;i<=1+2*(a-1);i=i+2){
        for (z=0;z<15;z++){
            cout<<" ";
        }
        for(z=0;z<((1+2*(a-1))-i)/2;z++){
            cout<<" ";
        }
        for(j=0;j<i;j++){
            
            cout<<"^";
        }
        
        cout<<endl;
    }
    return 0;
}