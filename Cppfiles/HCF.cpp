#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,i=2,p;
    cout<<"Enter the numbers\n";
    cin>>x>>y;
    while(i<x){
    if(x%i==0&&y%i==0){p=99; break;
    }
    i++;
  }
  if(p==99)
  cout<<"HCF=" <<i;
  else
    cout<<"HCF=1";
}
