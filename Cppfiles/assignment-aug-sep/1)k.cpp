#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of terms\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<'(';
        for(int j=1;j<=i;j++)
        {
            (j!=i)?cout<<j<<'+'
                  :cout<<j;
        }
        cout<<")+";
    }
}
