#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r){
    return ((x-xc)*(x-xc)+(y-yc)*(y-yc))<=r*r;
}

int main()
{
    double x, y, xc, yc, r;
    cout<<"Введите координаты точки"<<endl;
    cout<<"Введите x: ";
    cin>>x;
    cout<<endl;
    cout<<"Введите y: ";
    cin>>y;
    cout<<endl;
    cout<<"Введите координаты центра"<<endl;
    cout<<"Введите x: ";
    cin>>xc;
    cout<<endl;
    cout<<"Введите y: ";
    cin>>yc;
    cout<<endl;
    cout<<"Введите радиус: ";
    cin>>r;
    cout<<endl;
    if(IsPointInCircle(x,y,xc,yc,r)){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}