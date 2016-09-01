#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter the starting term\n";
    int x,y,z;
    cin>>x;
    cout<<"Enter the no. of terms\n";
    cin>>y;
    for(int i=1,j=1;i<=2*y,j<=y;i=i+2,j++)
    {
        if(j%2)
           {
            z=(1.0)/(pow(x,i));
            cout<<'+'<<"1/"<<x<<'^'<<i;
           }
        else
        {
            z=(-1)*(1.0)/(pow(x,i));
            cout<<'-'<<"1/"<<x<<'^'<<i;
        }
    }
}
