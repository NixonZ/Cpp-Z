#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter three numbers."<<'\n';
    cin>>a>>b>>c;
    if (a>b)
    {
              if(a>c)
              cout<<a<<" is the greatest";
              else
              cout<<c<<" is the greatest";
    }
    if(b>a)
    {
            if(b>c)
            cout<<b<<" is the greatest";
            else
            cout<<c<<" is the greatest";
    }
    getch();
}
