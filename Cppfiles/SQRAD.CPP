#include<iostream>
#include<conio.h>
#include<dos.h>
#include<math.h>
using namespace std;
int main()
{
 int x,y;
 int a,b,c;
 cout<<"enter the values of a,b and c\n";
 cin>>a >>b >>c;
 x=a+b+c;
 y=pow(a,x)+pow(b,x)+pow(c,x) ;
cout<<"\na^x+b^x+c^x="<<y;
 cout<<"\n(where x=a+b+c="<<x <<')';
 return 0;
}

