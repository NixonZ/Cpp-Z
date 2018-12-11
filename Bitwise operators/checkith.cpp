#include<iostream>
using namespace std;
int checkithbit(int x,int i)
{
  return (x& 1<<i);
}
int main()
{
  int x;
  cout<<"Enter x\n";
  cin>>x;
  int i;
  cout<<"Enter which bit is to be checked\n";
  cin>>i;
  if(checkithbit(x,i))
    cout<<i <<"th bit is set";
  else
    cout<<i<<"th bit is not set";
  return 1;
}
