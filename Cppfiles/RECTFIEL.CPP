#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 float l,b;
 cout<<"enter length\n";
 cin>>l;
 cout<<"enter breadth\n";
 cin>>b;
 float P,A;
 if (l>0 && b>0){
 P=2*(l+b);
 A=l*b;
 cout<<"\nThe perimeter of field is:"<<P
     <<"\nThe area of field is:"<<A;}
 else{
 cout<<"\nThese are not the sides of a rectangle";}
 return 0;
}
