#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    int n =10;
    int array[n];
    int newArray[n];
    int i;
    int index;
    int max=0;
    int j=0;
    int a;
    cout<<"Введите массив:"<<endl;
    for (i=0;i<n;i++){
        cin>>array[i];
        if(array[i]%2!=0){
            if(array[i]>max){
                max=array[i];
                index=i;
            }
        }
    }
    if(index<n-3){
        newArray[j]=array[index+3];
        array[index+3]=0;
        j++;
    }
    if(index<n-2){
        newArray[j]=array[index+2];
        array[index+2]=0;
        j++;
    }
    if(index<n-1){
        newArray[j]=array[index+1];
        array[index+1]=0;
        j++;
    }
    for (i=0;i<n;i++){
        if(!(array[i]==0)){
            newArray[j]=array[i];
            j++;
        }
    }
    max=0;
    for (i=0;i<n;i++){
        if(newArray[i]%2!=0){
            if(newArray[i]>max){
                max=newArray[i];
                index=i;
            }
        }
    }
    if(index-1>=0){
        a=newArray[index-1];
        for (i=index-1;i<n-1;i++){
            newArray[i]=newArray[i+1];
        }
        newArray[n-1]=a;
    }
    for (i=0;i<n;i++){
        cout<<newArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}