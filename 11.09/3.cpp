#include <iostream>
#include <cstdlib>
using namespace std; 
  
int main() 
{ 
    int cup, spoon, saucer; 
    cout<<"Введите количество чашек: "; 
    cin>>cup;
    spoon=cup;
    saucer = cup;
    int sum = cup+spoon+saucer;
    cout<<"Количество приборов: "<<sum<<endl; 
    return 0; 
}