#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std; 
  
int main() 
{ 
    stack <int> m_elems;
    string func;
    int n;
    bool exit=false;
    while(exit==false){
        func="";
        n=0;
        cin>>func;
        if (func=="push"){
            cin>>n;
            m_elems.push(n);
            cout<<"ok"<<endl;
        }
        if (func=="pop"){
            if(m_elems.empty()){
                cout<<"error"<<endl;
            } else{
                cout<<m_elems.top()<<endl;
                m_elems.pop();
            }
        }
        if (func=="back"){
            if(m_elems.empty()){
                cout<<"error"<<endl;
            } else{
                cout<<m_elems.top()<<endl;
            }
        }
        if (func=="size"){
            cout<<m_elems.size()<<endl;
        }
        if (func=="clear"){
            while(!m_elems.empty()){
                m_elems.pop();
            }
            cout<<"ok"<<endl;
        }
        if (func=="exit"){
            cout<<"bye"<<endl;
            exit=true;
        }
    }
    return 0; 
}