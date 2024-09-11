#include <iostream>
#include <cstdlib>
using namespace std; 
  
int main() 
{ 
    float a, b, s;
    char operation;
    cout<<"Выберите операцию(+, -, *, /, ^, %): "; 
    cin>>operation;
    cout<<"Введите первое число: "; 
    cin>>a;
    cout<<"Введите второе число: "; 
    cin>>b;
    if(operation=='+'){
        s=a+b;
        cout<<"Суммма: "<<s<<endl;
    }
    if(operation=='-'){
        s=a-b;
        cout<<"Разность: "<<s<<endl;
    }
    if(operation=='*'){
        s=a*b;
        cout<<"Произведение: "<<s<<endl;
    }
    if(operation=='/'){
        s=a/b;
        cout<<"Частное: "<<s<<endl;
    }
    if(operation=='^'){
        s=pow(a,b);
        cout<<"a^b= "<<s<<endl;
    }
    if(operation=='%'){
        s=int(a)%int(b);
        cout<<"Остаток от деления: "<<s<<endl;
    }
    return 0; 
}