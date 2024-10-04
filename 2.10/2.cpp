#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main()
{   
    int n =50;
    int arr[n],i;
    for(i=0;i<n;i++){ 
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(0, 49);
        int randomOddNumber = distrib(gen) * 2 + 1;
        arr[i] = randomOddNumber;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}