#include<iostream>
using namespace std;
int countno1(int x)
{
  int count=0;
  while(x)
  {
    count++;
    x=x&x-1;
  }
  return count;
}
int main()
{
  int x;
  cout<<"Enter x\n";
  cin>>x;
  cout<<"Number of 1's="<<countno1(x);
  return 1;
}
