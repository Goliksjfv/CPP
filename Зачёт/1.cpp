#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stack>
using namespace std;

struct TBook{
    string name;
    string author;
    int year;
};

void addBook(stack <TBook> & Books){
    TBook book;
    cout<<"Введите автора книги: ";
    cin>>book.author;
    cout<<"Введите название книги: ";
    cin>>book.name;
    cout<<"Введите год издания книги: ";
    cin>>book.year;
    Books.push(book);
}

void showBooks(stack <TBook> & Books){
    for (int i = 0; i<=Books.size()+1;i++){
        cout<<"Автор книги: "<<Books.top().author<<endl<<"Название книги: "<<Books.top().name<<endl<<"Год издания книги: "<<Books.top().year<<endl<<endl;
        Books.pop();
    }
    
}


int main()
{
    const int maxBooks=5;
    stack <TBook> Books;
    while (true){
        string o;
        cout<<endl<<"Введите + чтобы добавить новую книгу, введите s чтобы вывести список книг."<<endl;
        cin>>o;
        if(o=="+"){
            addBook(Books);
        } else if(o=="s"){
            showBooks(Books);
        } else {
            cout<<"Введён неверный параметр"<<endl;
        }
    }
    return 0;
}