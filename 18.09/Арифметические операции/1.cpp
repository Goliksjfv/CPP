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
    while(!m_elems.empty()){
        cout<<m_elems.top();
        m_elems.pop();
    }
    cout<<endl;
    return 0; 
}