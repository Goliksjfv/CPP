#include <iostream>
#include <cstdlib>
using namespace std; 
  
int main() 
{ 
    int chocolate, cofee, milk;
    int priceChocolate = 100;
    int priceCofee = 150;
    int priceMilk = 60;
    cout<<"Цена шоколада: "<<priceChocolate<<endl; 
    cout<<"Цена кофе: "<<priceCofee<<endl; 
    cout<<"Цена молока: "<<priceMilk<<endl; 
    cout<<"Количество шоколада: "; 
    cin>>chocolate;
    cout<<"Количество кофе: "; 
    cin>>cofee;
    cout<<"Количество молока: "; 
    cin>>milk;
    int sum = chocolate*priceChocolate+cofee*priceCofee+milk*priceMilk;
    cout<<"Сумма:"<<sum<<endl;
    return 0; 
}