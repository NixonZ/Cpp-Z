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
    cout<<"Enter the rows to be swapped\n";
    int x,y,temp;
    cin>>x>>y;
    for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            temp=A[x][l];
            A[x][l]=A[y][l];
            A[y][l]=temp;
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
