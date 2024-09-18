#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std; 
  
int main() 
{   
    float sum, months, incomePerMonth, allIncome, totalAmount, percent=0.05;
    int daysInYear = 365;
    int daysInMonth = 30;
    cout<<"Введите сумму депозита: ";
    cin>>sum;
    cout<<"Введите срок депозита в месяцах: ";
    cin>>months;
    incomePerMonth = sum*percent/daysInYear*daysInMonth;
    allIncome=incomePerMonth*months;
    totalAmount = sum+allIncome;
    cout<<"Прибыль в месяц: "<<incomePerMonth<<endl;
    cout<<"Общая прибыль: "<<allIncome<<endl;
    cout<<"Сумма к получению: "<<totalAmount<<endl;
    return 0; 
}