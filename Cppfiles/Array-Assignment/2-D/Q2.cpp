#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
    int A[3][3],B[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]:";
            cin>>A[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"B["<<i<<"]["<<j<<"]:";
            cin>>B[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<A[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
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
        switch(x)
        {
        case 1:
            {
                int flag=0;
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
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
                int C[3][3];
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        C[i][j]=A[i][j]+B[i][j];
                    }
                }
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        cout<<C[i][j]<<'\t';
                    }
                    cout<<endl;
                }
                break;
            }
        case 3:
            {
                int C[3][3];
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        C[i][j]=A[i][j]-B[i][j];
                    }
                }
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        cout<<C[i][j]<<'\t';
                    }
                    cout<<endl;
                }
                break;
            }
        case 4:
            {
                int C[3][3];
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                    {
                        C[i][j]=A[i][j]*B[i][j];
                    }
                }
                for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
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
