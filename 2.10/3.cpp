#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main()
{   
    int n = 10;
    int arr1[n],arr2[n],arr3[n],i;
    int randomNumber;
    int max=9,min=61,sum=0;
    cout<<endl<<"Массив 1: ";
    for(i=0;i<n;i++){ 
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(10, 30);
        randomNumber = distrib(gen);
        arr1[i] = randomNumber;
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<endl<<"Массив 2: ";
    for(i=0;i<n;i++){ 
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(10, 30);
        randomNumber = distrib(gen);
        arr2[i] = randomNumber;
        cout<<arr2[i]<<" ";
    }
    cout<<endl<<endl<<"Массив 3: ";
    for(i=0;i<n;i++){
        arr3[i]=arr1[i]+arr2[i];
        if(arr3[i]>max){
            max=arr3[i];
        }
        if(arr3[i]<min){
            min=arr3[i];
        }
        sum=sum+arr3[i];
        cout<<arr3[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Максимальное значение массива 3: "<<max<<endl;
    cout<<"Минимальное значение массива 3: "<<min<<endl;
    cout<<"Среднее значение массива 3: "<<sum/n<<endl<<endl;
    return 0;
}