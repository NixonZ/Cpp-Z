#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]:";
            cin>>A[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<'\t';
        }
        cout<<endl;
    }
    int temp;
    cout<<"Enter the rows to be swapped\n";
    int x,y;
    cin>>x>>y;
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
             temp=A[y-1][j];
             A[y-1][j]=A[x-1][j];
             A[x-1][j]=temp;
            }
        }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<'\t';
        }
        cout<<endl;
    }
}
