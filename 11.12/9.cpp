#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Swap(int & a, int & b){
    a = a + b;
    b = a - b;
    a = a - b; 
}

int main()
{
    int a,b;
    cout<<"Введите a: ";
    cin>>a;
    cout<<endl<<"Введите b: ";
    cin>>b;
    Swap(a,b);
    cout<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl;
    return 0;
}