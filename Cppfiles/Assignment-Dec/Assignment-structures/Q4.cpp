#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
struct name
{
    char fname[20];
    char mname[20];
    char lname[20];
};
struct address
{
    int hno;
    char street[20],city[20],state[20];
};
struct player
{
    name playername;
    int age;
    char game[20];
    address playeraddress;
};
int main()
{
    player database[100];
    int n;
    cout<<"Enter the no. of players\n";
    cin>>n;
    char asd[100];
    gets(asd);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the player "<<i+1<<"\'s name\n";
        cout<<"First name:"; cin.getline(database[i].playername.fname,20);
        cout<<"Middle name:"; cin.getline(database[i].playername.mname,20);
        cout<<"last name:"; cin.getline(database[i].playername.lname,20);
        cout<<"Enter the player's age:"; cin>>database[i].age; cin.get();
        cout<<"Enter the player's game:"; cin.getline(database[i].game,20);
        cout<<"Enter the player's address\n";
        cout<<"House no.:";cin>>database[i].playeraddress.hno;cin.get();
        cout<<"Street name.:";cin.getline(database[i].playeraddress.street,20);
        cout<<"City name.:";cin.getline(database[i].playeraddress.city,20);
        cout<<"State name.:";cin.getline(database[i].playeraddress.state,20);
    }
    cout<<"Enter the game to be checked for\n";
    char str[20];
    cin.getline(str,20);
    int A[100],a=0;
    for(int i=0;i<n;i++)
    {
        if(!stricmp(database[i].game,str))
            A[a++]=i;
    }
    cout<<"The matches are:\n";
    for(int i=0;i<a;i++)
    {
        cin.get();
        cout<<"Player no." <<A[i]+1<<endl;
        cout<<"Name:\n" ;
        cout<<"First name:";puts(database[A[i]].playername.fname);
        cout<<"Middle name:";puts(database[A[i]].playername.mname);
        cout<<"Last name:";puts(database[A[i]].playername.lname);
        cout<<"Age:" <<database[A[i]].age<<endl;
        cout<<"Player's address\n";
        cout<<"House no.:"<<database[A[i]].playeraddress.hno<<endl;
        cout<<"Street name.:";puts(database[A[i]].playeraddress.street);
        cout<<"City name.:";puts(database[A[i]].playeraddress.city);
        cout<<"State name.:";puts(database[A[i]].playeraddress.state);
    }
}
