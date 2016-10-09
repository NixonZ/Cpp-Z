#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter the "<<i+1 <<" term:";
        cin>>a[i];
        cout<<endl;
    }
    int temp;
    for(int l=0,k=4;l<3;l++,k--)
    {
        temp=a[l];
        a[l]=a[k];
        a[k]=temp;
    }
    for(int m=0;m<5;m++)
    {
        cout<<"The "<<m+1 <<" term is:";
        cout<<a[m];
        cout<<endl;
    }
}
