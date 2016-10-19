#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[10];
    int k,i,j,sum=0,sum7=0,sump=0,sume1=0,sumo1=0,maxm,minm,sume2=0,sumo2=0;
    for(i=0;i<10;i++)
    {
        cout<<"A["<<i+1<<"]:";
        cin>>A[i];
        sum+=A[i];
        if((i+1)%2)
            sumo1+=A[i];
        else
            sume1+=A[i];
        if(A[i]%2)
            sumo2+=A[i];
        else
            sume2+=A[i];
        if(!(A[i]%7))
            sum7+=A[i];
        if(i==0)
                {
                    maxm=A[i];
                    minm=A[i];
                }
        else if(A[i]>maxm)
            maxm=A[i];
        else
            minm=A[i];
    }
    cout<<"Maximum no.="<<maxm <<endl
        <<"Minimum no.="<<minm <<endl
        <<"Sum of Even no.="<<sume2<<endl
        <<"Sum of odd no.="<<sumo2<<endl
        <<"Sum of no. at even position="<<sume1<<endl
        <<"Sum of no. at odd position="<<sumo1<<endl
        <<"Sum of Multiples of 7="<<sum7;
    int avg=sum/10,counta=0,countb=0,B[10],l=0;
    cout<<"\nPrime no. are\n";
    for(i=0;i<10;i++)
    {
        if(A[i]>avg)
            counta++;
        else
                countb++;
        for(k=2;k<A[i];k++)
        {
                if(!(A[i]%k))
                    l=1;
        }
        if(l==0)
            cout<<A[i]<<'\t';
    }
    cout<<"\nCount of no. above average=" <<counta
        <<"\nCount of no. below average=" <<countb;
    int temp;
    for(i=0,k=9;i<5;k--,i++)
    {
        temp=A[i];
        A[i]=A[k];
        A[k]=temp;
    }
    cout<<"\nReverse\n";
    for(i=0;i<10;i++)
        cout<<A[i]<<endl;
}
