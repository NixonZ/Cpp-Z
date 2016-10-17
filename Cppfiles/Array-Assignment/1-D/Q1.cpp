#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char A[50];
    cout<<"Enter the string\n";
    cin.getline(A,50);
    cout<<A[0];
    int vowel=0,cons=0,words=1,l=strlen(A);
    for(int i=0;i<l;i++)
    {
        if(A[i]!=' ')
        {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
            vowel++;
         else
                cons++;
        }
         if(A[i]==' '&&i!=(l-1))
         words++;
    }
    cout<<"No. of words="<<words<<endl<<"No. of vowels="<<vowel<<endl<<"No. of consonants="<<cons<<endl;
    char B[50];
    for(int i=0;i<l;i++)
        B[i]=A[i];
    for(int i=0;i<l;i+=2)
    {
        B[i]='-';
    }
    cout.write(B,l);
    cout<<endl;
    char C[50];
    for(int i=0;i<l;i++)
        C[i]=A[i];
    for(int i=0;i<l;i++)
    {
        C[i]++;//try ahsbg
    }
    cout.write(C,l);
    int flag=1;
    for(int i=0,k=(l-1);i<l/2;k--,i++)
    {
        if(A[i]!=A[k])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"\nPalindrome";
    else
        cout<<"\nNot Palindrome";
}
