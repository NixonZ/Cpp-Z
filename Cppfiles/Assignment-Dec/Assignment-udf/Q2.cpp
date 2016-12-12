#include<iostream>
#define pi 3.14159265359
#include<math.h>
using namespace std;
float area;
int main()
{
  int x,l,b,s1,s2,s3;
  void circle();
  void rect(int a,int b);
  float square();
  float tri(int p,int q,int r);
  do {
    cout<<"\n1-Circle\n2-Rectangle\n3-Square\n4-Triangle\n5-Exit\n";
    cin>>x;
    switch (x) {
      case 1:circle();break;
      case 2:cout<<"Enter length and breadth\n";
             cin>>l>>b;
             rect(l,b);
             break;
      case 3:cout<<square();break;
      case 4:cout<<"Enter the sides\n";
             cin>>s1>>s2>>s3;
             cout<<tri(s1,s2,s3); break;
      case 5:cout<<"Bye\n"; break;
      default: cout<<"Wrong output\n";
    }
  } while(x!=5);
}
void circle()
{
  float r;
  cout<<"Enter the radius\n";
  cin>>r;
  area=r*r*pi;
  cout<<"Area="<<area;
}
void rect(int a,int b)
{
  area=a*b;
  cout<<"Area="<<area;
}
float square()
{
  float side;
  area=side*side;
  return area;
}
float tri(int p,int q,int r)
{
  int s=(p+q+r)/2;
  area=sqrt(s*(s-p)*(s-q)*(s-r));
  return area;
}
