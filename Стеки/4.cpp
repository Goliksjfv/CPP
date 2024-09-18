#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std; 
  
int main() 
{   
    stack <char> m_elems;
    char a;
    while ((a = cin.get()) != '\n'){
        m_elems.push(a);
    }
    cout<<m_elems.size()<<endl;
    return 0; 
}