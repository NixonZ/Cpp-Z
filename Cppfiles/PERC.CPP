#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int mrk1,mrk2,mrk3,tot;
 float perc;
 cout<<"Insert your marks\n";
 cin >>mrk1 >>mrk2 >>mrk3;
 tot=mrk1+mrk2+mrk3;
 perc=(tot/3) ;
 cout<<"Total marks="<<tot <<"\nPercentage="<<perc;
 getch();
 return 0;
}
