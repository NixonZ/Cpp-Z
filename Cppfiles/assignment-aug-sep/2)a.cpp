#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter the no. of rows\n";
    int x,z;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        z='A';
        for(int j=i;j>=1;j--)
        {
            cout<<(char)z;
            z++;
        }
        cout<<endl;
    }
}
