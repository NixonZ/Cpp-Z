#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,j=0;
    float x,a=1,b=1,sum=0,p;
    cout<<"enter the starting no.\n";
    cin>>x;
    cout<<"Enter the no. of terms\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        b=b*i;
        if(i%2==0){
        a=pow(x,i);
        j++;
        if(j%2)
        p=(a/b);
        else
            p=(-1.0)*(a/b);
        sum=sum+p;}
    }
    cout<<"\nCos"<<x<<'=' <<sum;
}
