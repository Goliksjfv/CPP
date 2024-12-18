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
    int a=179;
    Swap(a,a);
    cout<<a<<endl;
    return 0;
}