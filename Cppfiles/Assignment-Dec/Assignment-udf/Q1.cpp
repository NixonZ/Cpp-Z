#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
  char A[100];
  char upper[100],lower[100],special[100],digit[100];
  int u=0,l=0,sp=0,dig=0;
  cout<<"Enter the string\n";
  cin.getline(A,100);
  int k=strlen(A);
  for(int i=0;i<k;i++)
  {
    if(isalpha(A[i]))
    {
      if(isupper(A[i]))
        upper[u++]=A[i];
      else
        lower[l++]=A[i];
    }
    else if(isdigit(A[i]))
       digit[dig++]=A[i];
    else if(A[i]!=' ')
       special[sp++]=A[i];
  }
  cout<<"There are "<<u<<" upper charcters\nThese are:";cout.write(upper,u);cout<<endl;
  cout<<"There are "<<l<<" lower charcters\nThese are:";cout.write(lower,l);cout<<endl;
  cout<<"There are "<<sp<<" special charcters\nThese are:";cout.write(special,sp);cout<<endl;
  cout<<"There are "<<dig<<" digit charcters\nThese are:";cout.write(digit,dig);cout<<endl;
}
/*Q.1 WAP in c++ using build-in functions to input a sentence containing uppercase, lowercase , special characters and digits.
 Count the number of uppercase, lowercase , special characters and digits and display them separately.*/
