#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std; 
  
int main() 
{   
    int numberOfFinger;
    cout<<"Введите номер пальца: ";
    cin>>numberOfFinger;
    if(numberOfFinger==1){
        cout<<"Большой палец"<<endl;
    }
    if(numberOfFinger==2){
        cout<<"Указательный палец"<<endl;
    }
    if(numberOfFinger==3){
        cout<<"Средний палец"<<endl;
    }
    if(numberOfFinger==4){
        cout<<"Безымянный палец"<<endl;
    }
    if(numberOfFinger==5){
        cout<<"Мизинец"<<endl;
    }
    return 0; 
}