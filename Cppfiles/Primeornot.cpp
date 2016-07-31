#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,i=2,p=0;
    cout<<"Enter the number\n";
    cin>>x;
    if(x==0)
        cout<<"You are an disgrace Mr.Anderson";
    while(i<x)
    {
        if(x%i==0){
            p=99;
            break;
       }
       i++;
    }
    if(p==99&&x>1)
        cout<<"Composite";
    else
    cout<<"Prime";
}
