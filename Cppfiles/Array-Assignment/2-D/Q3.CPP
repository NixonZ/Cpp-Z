#include<iostream>
using namespace std;
int main()
{
 int A[3][3],i,j;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<"A["<<i+1<<"]["<<j+1<<"]:";
   cin>>A[i][j];
  }
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cout<<A[i][j]<<'\t';
  }
  cout<<endl;
 }
 cout<<endl;
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  if(j<=i)
  cout<<A[i][j]<<'\t';
  cout<<endl;
 }
 cout<<endl;
 for(i=0;i<3;i++)
 {
  for(int k=0;k<i;k++)
  cout<<'\t';
  for(j=0;j<3;j++)
  if(i<=j)
  cout<<A[i][j]<<'\t';
  cout<<endl;
 }
}
