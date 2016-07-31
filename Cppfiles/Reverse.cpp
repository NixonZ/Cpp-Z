#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter the Number\n";
    int x,a,b=0,sum=0,t=0;
    cin>>x;
    b=x;
    while(b!=0)
    {
        a=b%10;
        b=b/10;
        t=(t*10+a);
        sum=sum+a;
    }
    cout<<"Reverse of no.="<<t;
    cout<<"\nsum of digits=" <<sum;
}
