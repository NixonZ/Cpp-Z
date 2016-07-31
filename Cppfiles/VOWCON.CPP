#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 char a;
 cout<<"Enter an alphabet\n";
 cin>>a;
 if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
 cout<<"It is a vowel";
 else
 cout<<"It is a consonant";
 getch();
 return 0;
}
