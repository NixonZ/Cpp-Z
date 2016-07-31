#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

 float x,bill;
 cout<<"Enter the distance travelled in kms.\n";
 cin>>x;
 if(x==1){
 bill=25;
 cout<<"bill=Rs" <<bill;}
 else if(x<=5){
 bill=10+25;
 cout<<"Bill=Rs" <<bill;
 }
 else if(x<=15){
 bill=10+25+12.5;
 cout<<"Bill=Rs" <<bill;}
 else if(x>15){
 bill=10+25+12.5+(x-14)*15;
 cout<<"bill=Rs"<<bill;}
 getch();
 return 0;
}

