#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int A;
 int B,C,D,E,F,G,H,I;
 cout<<"Enter the amount present with you\n";
 cin>>A;
 B=A/1000;
 cout<<"\nNo.of 1000 rupee note=" <<B;
 C=A%1000/500;
 cout<<"\nNo.of 500 rupee note=" <<C;
 D=A%1000%500/100;
 cout<<"\nNo.of 100 rupee note=" <<D;
 E=A%1000%500%100/50;
 cout<<"\nNo.of 50 rupee note=" <<E;
 F=A%1000%500%100%50/20;
 cout<<"\nNo.of 20 rupee note=" <<F;
 G=A%1000%500%100%50%20/10;
 cout<<"\nNo.of 10 rupee note=" <<G;
 H=A%1000%500%100%50%20%10/5;
 cout<<"\nNo.of 5 rupee coin=" <<H;
 I=A%1000%500%100%50%20%10%5;
 cout<<"\nNo.of 1 rupee coin=" <<I;
 return 0;
}
