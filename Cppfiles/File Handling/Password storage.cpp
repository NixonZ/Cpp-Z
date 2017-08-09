#include<fstream>
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int count=0;
class user
{
    char password[10];
    char name[50];
    int id;
public:
    void change_pass()
    {
        cout<<"Enter new password(space to terminate)\n";
        char ch=' ';
        int i=0;
        while(ch!='\n'||i!=10)
        {
            ch=getch();
            cout<<'*';
            if(ch!=' ')
                password[i++]=ch;
            else
            {
                cout<<endl;
                break;
            }
        }
    }
    void input()
    {
        cin.get();
        cout<<"Enter name\n";
        cin.getline(name,50);
        id=count++;
        change_pass();
    }
};
int main()
{
    user database[10];
    ofstream fout("database.dat",ios::binary|ios::trunc);
    char x='y';
    do
    {
        cout<<"New user?(y\\n)\n";
        cin>>x;
        if(x=='n')
            break;
        else
        {
            database[count].input();
            fout.write((char *)&database[count-1],sizeof(&database[count-1]));
        }
    }while(x!='n');
}
