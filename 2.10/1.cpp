#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main()
{   
    int n=10;
    int arr[n],i;
    for(i=0;i<n;i++){ 
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(7, 14);
        int randomNumber = distrib(gen);
        arr[i] = randomNumber;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++){ 
        if(arr[i]>10){
            arr[i]=arr[i]-10;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}