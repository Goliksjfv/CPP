//y=-x y=2x+2 4=(x+1)^2+(y-1)^2

#include <iostream>
#include <cmath>
using namespace std;

bool inCircle(double x, double y)
{
    return ((x+1)*(x+1)+(y-1)*(y-1))<=4;
}

bool inLines(double x, double y){
    double perx=-2/3;
    double pery=2/3;
    return ((y<pery && x>=(y/2)-1 && x<=-y) || (y>pery && x<=(y/2)-1 && x>=-y) || (x==perx && y==pery));
}

bool IsPointInArea(double x, double y){
    double perx=-2/3;
    double pery=2/3;
    return ((inCircle(x,y) && inLines(x,y) && y>=pery) || (!inCircle(x,y) && inLines(x,y) && y<=pery));
}

int main()
{
    double x,y;
    cout<<"Введите x: ";
    cin>>x;
    cout<<endl<<"Введите y: ";
    cin>>y;
    if(IsPointInArea(x,y)){
        cout<<endl<<"YES"<<endl;
    } else{
        cout<<endl<<"NO"<<endl;
    }
    return 0;
}