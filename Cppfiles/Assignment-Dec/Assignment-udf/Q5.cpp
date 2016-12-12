#include<iostream>
using namespace std;
int search_no(int A[],int l,int y)
{
  int flag=-1;
  for(int i=0;i<l;i++)
  {
    if(A[i]==y){
    flag=1; break;}
  }
  return flag;
}
int main()
{
  int x[100],a,n,i;
  cout<<"Enter the no. of elements in the array\n";
  cin>>n;
  for(i=0;i<n;i++)
  {
    cout<<"A["<<i+1<<"]:";cin>>x[i];
  }
  cout<<"Enter the no. to be checked\n";
  cin>>a;
  cout<<search_no(x,n,a);
}
