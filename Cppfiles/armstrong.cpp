#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,d1,d2,d3,n;
    for(i=1;i<=500;i++)
    {
     d1=i/100;
     d2=(i-d1*100)/10;
     d3=(i-d1*100-d2*10);
     if(d1*d1*d1+d2*d2*d2+d3*d3*d3==i)
            cout<<i<<endl;
    }
}
