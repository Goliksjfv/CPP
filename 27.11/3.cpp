#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void PrintKubek(int a){
    if(a==1){
    cout<<"___________"<<endl;
    cout<<"|         |"<<endl;
    cout<<"|         |"<<endl;
    cout<<"|    *    |"<<endl;
    cout<<"|         |"<<endl;
    cout<<"|_________|"<<endl;
    }
    if(a==2){
    cout<<"___________"<<endl;
    cout<<"|         |"<<endl;
    cout<<"|       * |"<<endl;
    cout<<"|         |"<<endl;
    cout<<"| *       |"<<endl;
    cout<<"|_________|"<<endl;
    }
    if(a==3){
    cout<<"___________"<<endl;
    cout<<"|         |"<<endl;
    cout<<"|       * |"<<endl;
    cout<<"|    *    |"<<endl;
    cout<<"| *       |"<<endl;
    cout<<"|_________|"<<endl;
    }
    if(a==4){
    cout<<"___________"<<endl;
    cout<<"|         |"<<endl;
    cout<<"| *     * |"<<endl;
    cout<<"|         |"<<endl;
    cout<<"| *     * |"<<endl;
    cout<<"|_________|"<<endl;
    }
    if(a==5){
    cout<<"___________"<<endl;
    cout<<"|         |"<<endl;
    cout<<"| *     * |"<<endl;
    cout<<"|    *    |"<<endl;
    cout<<"| *     * |"<<endl;
    cout<<"|_________|"<<endl;
    }
    if(a==6){
    cout<<"___________"<<endl;
    cout<<"|         |"<<endl;
    cout<<"| *     * |"<<endl;
    cout<<"| *     * |"<<endl;
    cout<<"| *     * |"<<endl;
    cout<<"|_________|"<<endl;
    }
}

int throwKubek(){
    int a =  1 + rand()%6;
    int b =  1 + rand()%6;
    PrintKubek(a);
    PrintKubek(b);
    return a+b;
}

int main()
{
    srand(time(0));
    int who = 0 + rand()%2;
    int komp=0,player=0;
    if(who==0){
        cout<<"Первый бросает компьтер!"<<endl;
        for(int i=0;i<4;i++){
            cout<<"Бросок компьютера!"<<endl;
            komp=komp+throwKubek();
            cout<<endl;
            cout<<"Бросок игрока!"<<endl;
            player=player+throwKubek();
            cout<<endl;
            cout<<"Очков у компьютера: "<<komp<<endl;
            cout<<"Очков у игрока: "<<player<<endl;
            cout<<endl;
        }
        if(komp>player){
            cout<<"Компьютер победил!"<<endl;
        }else{
            cout<<"Игрок победил!"<<endl;
        }
    }else {
        cout<<"Первый бросает Игрок!"<<endl;
        for(int i=0;i<4;i++){
            cout<<"Бросок игрока!"<<endl;
            player=player+throwKubek();
            cout<<endl;
            cout<<"Бросок компьютера!"<<endl;
            komp=komp+throwKubek();
            cout<<endl;
            cout<<"Очков у игрока: "<<player<<endl;
            cout<<"Очков у компьютера: "<<komp<<endl;
            cout<<endl;
        }
        if(komp>player){
            cout<<"Компьютер победил!"<<endl;
        }else{
            cout<<"Игрок победил!"<<endl;
        }
    }
    return 0;
}
