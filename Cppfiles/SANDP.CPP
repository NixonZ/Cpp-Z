#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 char l,n,p;
 cout<<"Enter a character\n";
 cin>>l;
 n=l+1;
 cout<<"\nThe successors are:"<<'\n' <<n <<'\n' <<(char)(n+1) <<'\n'<<(char)(n+2) <<'\n'<<(char)(n+3) <<'\n'<<(char)(n+4)<<'\n'<<(char)(n+5);
 p=(l-1);
 cout<<"\n\nThe predecessors are:"<<'\n'<<p <<'\n' <<(char)(p-1)<<'\n' <<(char)(p-2)<<'\n' <<(char)(p-3)<<'\n' <<(char)(p-4)<<'\n' <<(char)(p-5);
 return 0;
}

