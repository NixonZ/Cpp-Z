#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 float a,b,c;
 cout<<"Enter the measure of the sides of triangle\n";
 cin>>a>>b>>c;
 if (a<0||b<0||c<0)
 cout<<"You are a disgrace Mr.Anderson";
 else if (a<b+c && b<a+c && c<a+b)
{
 if (a==b && b==c && a==c)
 cout<<"\nThe triangle is equilateral";
 else if (a==b || b==c || a==c)
 cout<<"\nThe triangle is isoceles";
 else
 cout<<"\nThe triangle is scalene";
}
 else
 cout<<"\nThese are not the measure of the sides of a triangle";
 return 0;
}
