#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int boxes,i=1,boxesInTruck,lastBox;
    cout<<"Введите общее количество ящиков: ";
    cin>>boxes;
    while(boxes > 0){
        cout<<"Введите количество ящиков в машину "<<i<<": ";
        cin>>boxesInTruck;
        lastBox=boxes;
        boxes=boxes-boxesInTruck;
        if(boxes<0){
            cout<<"Ящиков не хватило, в машину "<<i<<" загружено "<<lastBox<<" ящиков."<<endl;
        }
        if(boxes==0){
            cout<<"Все ящики загружены"<<endl;
        }
        i++;
    }
    return 0;
}