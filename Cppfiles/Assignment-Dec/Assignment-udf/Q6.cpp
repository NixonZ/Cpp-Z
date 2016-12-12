#include<iostream>
using namespace std;
void arrayout(int B[][10],int a,int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
            cout<<B[i][j]<<'\t';
        cout<<endl;
    }
    cout<<endl;
}
int rowsum(int B[][10],int a,int b)
{
    int sum=0;
    for(int i=0;i<a;i++)
    {
        cout<<B[b][i]<<'\t';
        sum+=B[b][i];
    }
    cout<<endl;
    return sum;
}
int columnsum(int B[][10],int a,int b)
{
    int sum=0;
    for(int i=0;i<a;i++)
    {
        cout<<B[i][b]<<endl;
        sum+=B[i][b];
    }
    return sum;
}
int main()
{
    int A[10][10],m,n,i,j;
    cout<<"Enter the size of the array\n";
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"]:";cin>>A[i][j];
        }
    }
    arrayout(A,m,n);
    int temp;
    for(i=0;i<m;i++)
    {
        cout<<"Row "<<i+1<<endl;
        temp=rowsum(A,n,i);
        cout<<"Sum of row "<<i+1<<'='<<temp<<endl;
    }
    for(i=0;i<m;i++)
    {
        cout<<"Column "<<i+1<<endl;
        temp=columnsum(A,m,i);
        cout<<"Sum of column "<<i+1<<'='<<temp<<endl;
    }
}
