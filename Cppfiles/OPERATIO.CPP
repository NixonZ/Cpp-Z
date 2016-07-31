#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
 int n1,n2;
 cout<<"enter two numbers\n";
 cin>>n1>>n2;
 char x;
 cout<<"Enter the operation you want to perform\n";
 cin>>x;
 if (x=='+')
 cout<<n1<<'+'<<n2 <<'=' <<n1+n2;
 else if (x=='-')
 cout<<n1<<'-'<<n2<<'='<<n1-n2;
 else if (x=='*')
 cout<<n1<<'*'<<n2<<'='<<n1*n2;
 else if (x=='/')
 cout<<n1<<'/'<<n2<<'='<<n1/n2;
 else if (x=='%')
 cout<<n1<<'%'<<n2<<'='<<n1%n2;
 else
 cout<<"undefined operator";
 getch();
 system("cls");
 switch(x)
 { case'+':cout<<n1<<'+'<<n2 <<'=' <<n1+n2;
	       break;
   case'-':cout<<n1<<'-'<<n2 <<'=' <<n1-n2;
	       break;
   case'*':cout<<n1<<'*'<<n2 <<'=' <<n1*n2;
	       break;
   case'/':cout<<n1<<'/'<<n2 <<'=' <<n1/n2;
	       break;
   case'%':cout<<n1<<'%'<<n2 <<'=' <<n1%n2;
	       break;
   default:cout<<"you are a disgrace Mr.Anderson";
 }
}
