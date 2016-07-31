#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,n,a=1,b=1,sum=0,p;
    cout<<"enter the starting no.\n";
    cin>>x;
    cout<<"Enter the no. of terms\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        a=a*x;
        b=b*i;
        p=(float)(a/b);
        cout<<a <<'/' <<i<<'!'<<'+';
        sum=sum+p;
    }
    cout<<"\nSum=" <<sum;
}
