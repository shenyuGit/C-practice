#include <iostream>
#include <cstring>

using namespace std;

void printBook(struct Books *book);

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main()
{
    struct Books *Book1= new Books;
    strcpy(Book1[0].title,"C++");
    strcpy(Book1[0].author,"XXX");
    strcpy(Book1[0].subject,"C++ practice");
    Book1[0].book_id = 1;

    strcpy(Book1[1].title,"VC++");
    strcpy(Book1[1].author,"CCC");
    strcpy(Book1[1].subject,"VC++ practice");
    Book1[1].book_id = 2;
    printBook(Book1);
    return 0;
}
void printBook(struct Books *book)
{
    cout<<"Book title:"<<book[0].title<<endl;
    cout<<"Book author:"<<book[0].author<<endl;
    cout<<"Book subject:"<<book[0].subject<<endl;
    cout<<"Book id:"<<book[0].book_id<<endl;

    cout<<"Book title:"<<book[1].title<<endl;
    cout<<"Book author:"<<book[1].author<<endl;
    cout<<"Book subject:"<<book[1].subject<<endl;
    cout<<"Book id:"<<book[1].book_id<<endl;

}
