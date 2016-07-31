#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int x,mx,a,mn;
    cout<<"Enter the numbers| 0to exit\n";
    cin>>x;
    if(x!=0){
     mx=x;
     mn=x;
    while(a!=0)
    {
        cin>>a;
        if(a!=0){
        if(a>mx)mx=a;
        if(a<mn)mn=a;}
    }
    cout<<"Max=" <<mx;
    cout<<"\nMin=" <<mn;
    }
    else
        exit(0);
}
