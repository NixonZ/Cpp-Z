#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.14159
using namespace std;
int main()
{
    int x;
    do
    {
        cout<<"\nEnter your choice\n1-Sum of Triangle\n2-Rectangle\n3-Square\n4-Circle\n0-Exit\n";
        float A;
        cin>>x;
        if(x==1)
        {
            cout<<"Enter the sides of triangle\n";
            float a,b,c;
            cin>>a>>b>>c;
            float s=(a+b+c)/2;
            A=sqrt(s*(s-a)*(s-b)*(s-c));
        }
        else if(x==2||x==3)
        {
            float a,b;
            if(x==2){cout<<"Enter the sides of rectangle\n";
                     cin>>a>>b;}
            if(x==3){cout<<"Enter the side of Square\n";
                     cin>>a; b=a;}
            A=a*b;
        }
        else if(x==4)
        {
            float r;
            cout<<"Enter the radius of circle\n";
            cin>>r;
            A=pi*pow(r,2);
        }
        if(x==1||x==2||x==3||x==4)cout<<"area=" <<A;
        else if(x==0)cout<<"Bye";
        else {cout<<"Idiot"; exit(-1);}
    }while(x!=0);
}
