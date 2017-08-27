#include"../main.h"
void bsort(int A[], int T)
{
    int temp;
    for(int i=0;i<T;i++)
    {
        for(int j=0;j<T-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
