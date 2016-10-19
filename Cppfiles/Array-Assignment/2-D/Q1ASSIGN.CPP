#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
 int A[3][3],i,j;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<"A["<<i<<"]["<<j<<"]:";
   cin>>A[i][j];
  }
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  cout<<A[i][j]<<'\t';
  cout<<endl;
 }
 int flag,sum=0,sume=0,sumo=0,suma=0,sumr[3]={0,0,0},sumc[3]={0,0,0},sumd1=0,sumd2=0,sumnod=0,l=0;
 cout<<"\Prime no. are\n";
 for(i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
   flag=0;
   sum+=A[i][j];
   if(l%2)
    suma+=A[i][j];
   l++;
   (A[i][j]%2)?sumo+=A[i][j]:sume+=A[i][j];
   for(int k=2;k<A[i][j];k++)
   {
    if(!(A[i][j]%k)||A[i][j]==0)
       flag=1;
   }
    if(flag==0)
    cout<<A[i][j]<<'\t';
   if(i==j)
   sumd1+=A[i][j];
   if(i+j==2)
   sumd2+=A[i][j];
   if(i!=j&&i+j!=2)
   sumnod+=A[i][j];
  }
 }
 for(i=0;i<3;i++)
 {
     sumr[i]=0;
     sumc[i]=0;
     for(j=0;j<3;j++)
    {
        switch(i)
        {
        case 0:sumr[i]+=A[i][j];break;
        case 1:sumr[i]+=A[i][j];break;
        case 2:sumr[i]+=A[i][j];break;
        }
        switch(i)
        {
        case 0:sumc[i]+=A[j][i];break;
        case 1:sumc[i]+=A[j][i];break;
        case 2:sumc[i]+=A[j][i];break;
        }
    }
 }
 Sleep(1000);
 cout<<"\nSum of all elements="<<sum<<"\nSum of alternate element="<<suma
     <<"\nsum of even elements="<<sume<<"\nsum of odd element="<<sumo
     <<"\nSum of elements on diagonal (i=j) ="<<sumd1
     <<"\nSum of elements on diagonal (i+j=2) ="<<sumd2
     <<"\nSum of elements not on diagonal"<<sumnod;
 for(i=0;i<3;i++)
 {
  cout<<"\nSum of column"<<i+1<<'=' <<sumc[i];
  cout<<"\nSum of row"<<i+1<<'=' <<sumr[i];
 }
}
