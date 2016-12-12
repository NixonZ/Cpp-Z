#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int bookno; char title[20]; int copies;
};
void search_book(book a[],char b[])
{
    for(int i=0;i<5;i++)
    {
        if(!stricmp(a[i].title,b))
            {
                cout<<"Details of book are\n";
                cout<<"Book no.=" <<a[i].bookno<<endl;
                cout<<"No. of copies="<<a[i].copies<<endl;
            }
    }
}
int main()
{
    book database[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the details of bookno."<<i+1<<endl;;
        database[i].bookno=i+1;
        cout<<"Enter the book title:"; cin.getline(database[i].title,20);
        cout<<"Enter the no. of copies present:"; cin>>database[i].copies;cin.get();
    }
    char check[20];
    cout<<"Enter the name of the book to be checked\n";
    cin.getline(check,20);
    search_book(database,check);
}
