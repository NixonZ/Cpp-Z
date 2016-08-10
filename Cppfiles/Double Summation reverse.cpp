#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,sum=0;
    cout<<"Enter limit\n";
    cin>>x;
    for(int j=0;j<=x;j++)
    {
        for(int i=j;i<=x;i++)
        sum=sum+(i+j)*(i*j);
    }
    cout<<"Sum="<<sum;
}
