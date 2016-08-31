#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the no. of terms\n";
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        cout<<'(';
        for(int j=2;j<=2*i;j=j+2)
        {
            (j!=2*i)?cout<<j<<'+'
                 :cout<<j;
        }
        cout<<")+";
    }
}
