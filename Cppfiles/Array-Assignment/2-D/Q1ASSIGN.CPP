#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int A[3][3];
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<3;j++)
  {
   cout<<"A["<<i<<"]["<<j<<"]:";
   cin>>A[i][j];
  }
 }
 for(int z=0;z<3;z++)
 {
  for(int x=0;x<3;x++)
  cout<<A[z][x]<<'\t';
  cout<<endl;
 }
 int flag,sum=0,sume=0,sumo=0,suma=0,sumr[3]={0,0,0},sumc[3]={0,0,0},sumd1=0,sumd2=0,sumnod=0,l=0;
 cout<<"\Prime no. are\n";
 for(int a=0;a<3;a++)
 {
  for(int k=0;k<3;k++)
  {
   flag=0;
   sum+=A[a][k];
   if(l%2)
    suma+=A[a][k];
   l++;
   (A[a][k]%2)?sumo+=A[a][k]:sume+=A[a][k];
   for(int b=2;b<A[a][k];b++)
   {
    if(!(A[a][k]%b))
       flag=1;
   }
    if(flag==0)
    cout<<A[a][k]<<'\t';
    sumr[a]=0;
    switch(a)
   {
    case 0:sumr[a]+=A[a][k];break;
    case 1:sumr[a]+=A[a][k];break;
    case 2:sumr[a]+=A[a][k];break;
   }
   sumc[k]=0;
   switch(k)
   {
    case 0:sumc[k]+=A[a][k];break;
    case 1:sumc[k]+=A[a][k];break;
    case 2:sumc[k]+=A[a][k];break;
   }
   if(a==k)
   sumd1+=A[a][k];
   else if(a+k==2)
   sumd2+=A[a][k];
   else
   sumnod+=A[a][k];
  }
 }
 cout<<"\nSum of all elements="<<sum<<"\nSum of alternate element="<<suma
     <<"\nsum of even elements="<<sume<<"\nsum of odd element="<<sumo
     <<"\nSum of elements on diagonal (i=j) ="<<sumd1
     <<"\nSum of elements on diagonal (i+j=2) ="<<sumd2
     <<"\nSum of elements not on diagonal"<<sumnod;
 for(int c=0;c<3;c++)
 {
  cout<<"\nSum of column"<<c+1<<'=' <<sumc[c];
  cout<<"\nSum of row"<<c+1<<'=' <<sumr[c];
 }
 getch();
}

