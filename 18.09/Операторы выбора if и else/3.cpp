#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std; 
  
int main() 
{   
    int multiplier1,multiplier2,composition,answer;
    cout<<"Введите первый множитель: ";
    cin>>multiplier1;
    cout<<"Введите второй множитель: ";
    cin>>multiplier2;
    composition=multiplier1*multiplier2;
    cout<<"Введите ответ: ";
    cin>>answer;
    if(answer==composition){
        cout<<"Правильно!"<<endl;
    } else {
        cout<<"Неправильно!"<<endl;
        cout<<"Правильный ответ: "<<composition<<endl;
    }
    return 0; 
}