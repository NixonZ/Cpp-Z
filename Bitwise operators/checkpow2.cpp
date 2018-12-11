#include<iostream>
using namespace std;
int checkpower2(int x)
{
  return (x&&!(x&x-1));
}
int main()
{
  int x;
  cout<<"Enter x\n";
  cin>>x;
  if(checkpower2(x))
    cout<<"Number is a power of 2";
  else
    cout<<"Number not a power of 2";
  return 1;
}
