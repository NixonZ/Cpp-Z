#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter two no.\n";
    int x1,x2,hcf,flag=0;
    cin>>x1;
    cin>>x2;
    for(int i=1;i<=max(x1,x2);i++)
    {
        if(x1%i==0&&x2%i==0&&i!=1)
            {hcf=i; flag=1;}
    }
    if(flag==0)
        {
            cout<<"HCF is 1";
            hcf=1;
        }
    else if(flag==1)
        {
            cout<<"HCF is "<<hcf;
        }
    cout<<"\nLCM="<<(float)((x1*x2)/hcf);
}
