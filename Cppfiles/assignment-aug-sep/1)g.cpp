#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the no. of terms\n";
    int x,a=1,b=-50;
    cin>>x;
    for(int i=1;i<=2*x;i++)
    {
        cout<<','<<a<<','<<b;
        a=a+2;
        b=b+2;
    }
}
