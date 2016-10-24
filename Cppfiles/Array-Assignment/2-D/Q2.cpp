#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
    int A[10][10],B[10][10],i,j,m,n,p,q;
    a:
    cout<<"Enter the Rows*Column of the first array";
    cin>>m>>n;
    cout<<"Enter the Rows*column of the second array";
    cin>>p>>q;
    if(m>10||n>10||p>10||q>10)
        {
            cout<<"Size of the array is very large";
            goto a;
        }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"]:";
            cin>>A[i][j];
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cout<<"B["<<i+1<<"]["<<j+1<<"]:";
            cin>>B[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<A[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cout<<B[i][j]<<'\t';
        }
        cout<<endl;
    }
    int x;
    do
    {
        cout<<"\nMenu\n1. Equality\n2. Addition\n3. Subtraction\n4. Multiplication\n5. Exit \n";
        cin>>x;
        if(m!=p&&n!=q)
        {
            if(x!=4&&x!=5)
            {
                cout<<"Matrix should have equal no. of rows and column\n";
                x=6;
            }
        }
        switch(x)
        {
        case 1:
            {
                int flag=0;
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        if(A[i][j]!=B[i][j])
                        {flag=1;
                        break;}
                    }
                }
                (flag==0)?cout<<"\nArray are equal\n":cout<<"\nArray are not equal\n";
                break;
            }
        case 2:
            {
                int C[20][20];
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        C[i][j]=A[i][j]+B[i][j];
                    }
                }
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        cout<<C[i][j]<<'\t';
                    }
                    cout<<endl;
                }
                break;
            }
        case 3:
            {
                int C[20][20];
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        C[i][j]=A[i][j]-B[i][j];
                    }
                }
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        cout<<C[i][j]<<'\t';
                    }
                    cout<<endl;
                }
                break;
            }
        case 4:
            {
                int C[20][20],sum=0,l=0,z=0;
                if(n!=p)
                {
                    cout<<"Multiplication not possible\n";
                    x=6;
                }
                for(i=0;i<m;i++)
                {
                   for(j=0;j<q;j++)
                    {
                       sum=0;
                       for(int k=0;k<n;k++)
                       {
                           sum+=A[i][k]*B[k][j];
                       }
                       C[i][j]=sum;
                    }
                }
                for(i=0;i<m;i++)
                {
                    for(j=0;j<q;j++)
                    {
                        cout<<C[i][j]<<'\t';
                    }
                    cout<<endl;
                }
                break;
            }
        case 5:break;
        default:cout<<"Wrong input\n";
        }
        Sleep(1000);
    }while(x!=5);
}
