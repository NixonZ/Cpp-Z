#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,m,n;
    cout<<"Enter the starting point\n";
    cin>>i;
    cout<<"Enter the last term\n";
    cin>>n;
    cout<<"Enter the increment value\n";
    cin>>m;
    for(i;i<=n;i=i+m){
        cout<<i <<'\t';
        if(i%2)
            cout<<"odd\n";
        else
            cout<<"even\n";
    }
}
