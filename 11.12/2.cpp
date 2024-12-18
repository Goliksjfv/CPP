#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double distance(double x1, double y1, double x2, double y2){
    double x;
    double y;
    if(x1<x2){
        x = x2-x1;
    } 
    if(x1>x2) {
        x = x1-x2;
    }
    if(y1<y2){
        y = y2-y1;
    } 
    if(y1>y2) {
        y = y1-y2;
    }
    if(x1==x2){
        if(y1!=y2){
            return y;
        }
        return 0;
    }
    if(y1==y2){
        if(x1!=x2){
            return x;
        }
        return 0;
    }
    return sqrt(x*x+y*y);
}

int main()
{   
    double x1,y1,x2,y2;
    cout<<"Введите x1: ";
    cin>>x1;
    cout<<endl<<"Введите y1: ";
    cin>>y1;
    cout<<endl<<"Введите x2: ";
    cin>>x2;
    cout<<endl<<"Введите y2: ";
    cin>>y2;
    cout<<endl<<distance(x1,y1,x2,y2)<<endl;
    return 0;
}
