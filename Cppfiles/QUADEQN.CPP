#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
struct complex //data type is created
{
 float real;
 float imag;
};

int main()
{
 float x,x1,x2;
 complex r1,r2; //data type used
 float a,b,c;
 cout<<"enter a,b,c(in this order) for the equation ax^2+bx+c=0\n";
 cin>>a >>b >>c  ;
 cout<<"\nsum of the roots is:" <<(-b/a);
 cout<<"\nproduct of the roots is:" <<(c/a);
 float D;
 D=b*b-4*a*c;
 cout<<"\nD="<<D;
 if(D==0){
 x=-b/2*a;
 cout<<"\nsince D=0 x="<<x;
 }
 else if(D>0){           //NIG
 x1=((-b+sqrt(D))/(2*a)); x2=((-b-sqrt(D))/(2*a));
 cout<<"\nx1="<<x1<<"\nx2="<<x2 ;  //two different roots are defined separately
 }
 else{
 r1.real=((-b)/(2*a)); r1.imag=((sqrt(-D))/(2*a));  /*two different parts of a single variable */
 r2.real=((-b)/(2*a)); r2.imag=(-(sqrt(-D))/(2*a));
 cout<<"\nx1="<<r1.real<<'+'<<r1.imag<<'i'; cout<<"\nx2="<<r2.real<<'+'<<r2.imag<<'i';
 }
 return 0;
}

