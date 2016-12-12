#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
void dec2bin(int A)
{
    int i=0,bin[60];
    while(A>0)
    {
        bin[i]=A%2;
        i++;
        A/=2;
    }
    for(int j=i-1;j>=0;j--)
        cout<<bin[j];
    cout<<endl;
}
void dec2oct(int A)
{
    int i=0,oct[60];
    while(A>0)
    {
        oct[i]=A%8;
        i++;
        A/=8;
    }
    for(int j=i-1;j>=0;j--)
        cout<<oct[j];
    cout<<endl;
}
void dec2hex(int A)
{
    int i=0,hex[60];
    while(A>0)
    {
        hex[i]=A%16;
        i++;
        A/=16;
    }
    for(int j=i-1;j>=0;j--)
    {
        switch(hex[j])
        {
            case 10:cout<<'A';break;
            case 11:cout<<'B';break;
            case 12:cout<<'C';break;
            case 13:cout<<'D';break;
            case 14:cout<<'E';break;
            case 15:cout<<'F';break;
            default:cout<<hex[j];
        }
    }
    cout<<endl;
}
void bin2dec(char A[])
{
    int y=0,j;
    for(int i=(strlen(A)-1),j=0;i>=0;i--,j++)
        y+=(A[i]-48)*pow(2,j);
    cout<<y<<endl;
}
void oct2dec(char A[])
{
    int y=0,j;
    for(int i=(strlen(A)-1),j=0;i>=0;i--,j++)
        y+=(A[i]-48)*pow(8,j);
    cout<<y<<endl;
}
void hex2dec(char A[])
{
    int y=0,j,z;
    for(int i=(strlen(A)-1),j=0;i>=0;i--,j++)
    {
        switch(A[i])
        {
            case 'A':z=10;break;
            case 'B':z=11;break;
            case 'C':z=12;break;
            case 'D':z=13;break;
            case 'E':z=14;break;
            case 'F':z=15;break;
            default:z=(A[i]-48);
        }
        y+=z*pow(16,j);
    }

    cout<<y<<endl;
}
int main()
{
    int x;
    int No;
    char no[30];
    do
    {
        cout<<"1-Decimal to binary\n2-Decimal to octal\n3-Decimal to hexadecimal\n4-Binary to Decimal"
            <<"\n5-Octal to decimal\n6-Hexadecimal to Decimal\n";
        cin>>x;
        if(x<=3)
        {
            cout<<"Enter the no.\n";
            cin>>No;
        }
        else if(x>3&&x<7)
        {
            cout<<"Enter the no.\n";
            cin>>no;
        }
        if(No==0)
        {
            cout<<'0';
            x=7;
        }
        else
        {
          switch(x)
          {
            case 1:dec2bin(No); break;
            case 2:dec2oct(No); break;
            case 3:dec2hex(No); break;
            case 4:bin2dec(no); break;
            case 5:oct2dec(no); break;
            case 6:hex2dec(no); break;
            case 7:break;
            default:cout<<"Wrong input\n";
          }
        }
    }while(x!=7);
}
