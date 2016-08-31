#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the no. of terms\n";
    int n,fact=1; float sum=0,z;
    cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        fact=fact*i;
        if(i%2)
        {
            z=(1.0)/fact;
            cout<<"1/"<<i<<'!'<<'+';
            sum=sum+z;
        }
    }
    cout<<endl<<"Sum="<<sum;
}
