#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,n,j=1;
    float x,a,b=1,sum=0,p=1.0;
    cout<<"Enter x\n";
    cin>>x;
    cout<<"Enter the no. of terms\n";
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        b=b*i;
        a=pow(x,i);
        if(i%2)
        {
            j++;
            if(j%2==0)
            {
                cout<<'+'<<x<<'^'<<i<<'/'<<i<<"!";
                p=(a/b);
            }
            else
            {
                cout<<'-'<<x<<'^'<<i<<'/'<<i<<"!";
                p=((-1.0)*(a/b));
            }
          sum=sum+p;
        }

    }
    cout<<"\nsin"<<x<<'='<<sum;
}
