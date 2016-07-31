#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int x,n,sum=0,a=1;
    cout<<"Enter the variable x\n";
    cin>>x;
    cout<<"Enter the no. of terms\n";
    cin>>n;
    for(int i=0;i<=(n-1);i++){
        sum=sum+pow(x,i);
        cout<<pow(x,i)<<'+';
    }
    cout<<"\nSum=" <<sum;
}
