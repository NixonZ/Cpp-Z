#include<iostream>
#include<math.h>
using namespace std;
struct complex
{
   float real;
   float imag;
};
int main()
{
   void add(complex a,complex b,complex &c);
   void sub(complex a,complex b,complex &c);
   void mul(complex a,complex b,complex &c);
   void div(complex a,complex b,complex &c);
   complex A[2],result;
   int i,x;
   for(i=0;i<2;i++)
   {
     cout<<"Enter the complex no."<<i+1<<"(a+bi)\n";
     cout<<"a="; cin>>A[i].real;
     cout<<"b="; cin>>A[i].imag;
   }
   do {
     cout<<"1-Add\n2-Subtract\n3-Multiply\n4-Divide\n5-Exit\n";
     cin>>x;
     switch (x) {
       case 1:add(A[0],A[1],result);break;
       case 2:sub(A[0],A[1],result);break;
       case 3:mul(A[0],A[1],result);break;
       case 4:div(A[0],A[1],result);break;
       case 5:break;
       default:cout<<"Wrong input\n";
     }
     if(x<5)
     {
       cout<<"The result is " <<result.real;
       (result.imag>=0)?cout<<'+':cout<<'-';
       cout<<fabs(result.imag)<<'i'<<endl;
     }
   } while(x!=5);
}
void add(complex a,complex b,complex &c)
{
   c.real=a.real+b.real;
   c.imag=a.imag+b.imag;
}
void sub(complex a,complex b,complex &c)
{
   c.real=a.real-b.real;
   c.imag=a.imag-b.imag;
}
void mul(complex a,complex b,complex &c)
{
  c.real=a.real*b.real-a.imag*b.imag;
  c.imag=a.real*b.imag+a.imag*b.real;
}
void div(complex a,complex b,complex &c)
{
  c.real=(a.real*b.real+a.imag*b.imag)/(b.real*b.real+b.imag*b.imag);
  c.imag=(a.imag*b.real-a.real*b.imag)/(b.real*b.real+b.imag*b.imag);
}
