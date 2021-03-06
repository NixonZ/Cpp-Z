#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==1)
        return 1;
    else
        return a*fact(a-1);
}
int main()
{
  void fibonacci(int a);
  void odd(int a);
  void series1(int a,float b);
  void series2(int c);
  int n,x;
  float y;
  do {
    cout<<"1. Fibonacci series\n2. Series of odd numbers\n3. x + x/2! + x/3! + x/4! +-------\n"
        <<"4. (1) +(1+2) + ( 1+2+3) +---------------\n5-Exit\n";
    cin>>x;
    if(x!=5)
    {
        cout<<"Enter the no. of terms\n";
        cin>>n;
    }
    switch (x) {
      case 1:fibonacci(n);break;
      case 2:odd(n);break;
      case 3:cout<<"Enter x"<<endl;cin>>y;series1(n,y);break;
      case 4:series2(n);break;
      case 5:break;
      default:cout<<"Wrong input\n";break;
    }
  } while(x!=5);
}
void fibonacci(int a)
{
  int b1=1,b2=1,sum=2,temp;
  cout<<b1<<' '<<b2<<' ';
  for(int i=0;i<(a-2);i++)
  {
    temp=b2;
    b2=b1+b2;
    b1=temp;
    cout<<b2<<' ';
    sum+=b2;
  }
  cout<<"\nSum="<<sum<<endl;
}
void odd(int a)
{
  int sum=0,j=1;
  for(int i=1;i<=a;i++)
  {
    cout<<j;
    sum+=j;
    j+=2;
    if(i!=a)
        cout<<'+';
  }
  cout<<"\nsum="<<sum<<endl;
}
void series1(int a,float b)
{
  float sum=0;
  for(int i=1;i<=a;i++)
  {
    cout<<b<<'/'<<i<<"!";
    if(i!=a)
     cout<<'+';
    sum+=(float)(b/fact(i));
  }
  cout<<"\nSum="<<sum<<endl;
}
void series2(int c)
{
  int sum=0,x;
  for(int i=1;i<=c;i++)
  {
    cout<<'(';
    for(int j=1;j<=i;j++)
    {
        cout<<j;
        if(j!=i)
            cout<<'+';
        sum+=j;
    }
    cout<<')';
    if(i!=c)
      cout<<'+';
  }
  cout<<"\nthe sum="<<sum<<endl;
}
