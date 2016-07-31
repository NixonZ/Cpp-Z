#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int mrks;
 cout<<"Enter your marks(Out of 100)\n";
 cin>>mrks;
 if(mrks>100 || mrks<0)
 cout<<"you are a disgrace Mr.Anderson";
 else if (mrks>=90)
 cout<<"\nYour grade is A";
 else if (mrks>=75)
 cout<<"\nYour grade is B";
 else if (mrks>=60)
 cout<<"\nYour grade is C";
 else if (mrks>=40)
 cout<<"\nYour grade is D";
 else if(mrks>=0)
 cout<<"\nYour grade is E";
 return 0;
}
