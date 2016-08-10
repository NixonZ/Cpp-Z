#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,sum=0;
    cout<<"Enter limit\n";
    cin>>x;
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=i;j++)
        sum=sum+(i+j)*(i*j);
    }
    cout<<"Sum="<<sum;
}
