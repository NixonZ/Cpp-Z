#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter the no.\n";
    int y,x,z;
    cin>>x;
    cout<<"Enter the no. of terms\n";
    cin>>y;
    for(int i=1;i<=2*y;i++)
    {
        if(i%2)
        {
            z=pow((-1),i)*(1.0)/(pow(x,i));
            cout<<"1/"<<x<<'^'<<i<<'+';
        }
    }
}
