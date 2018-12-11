#include"../main.h"
void ssort(int A[], int T)
{
    int min,pos,temp;
    for(int i=0;i<T;i++)
    {
        min=A[i];
        pos=i;
        for(int j=i;j<T;j++)
        {
            if(A[j]<min)
            {
                min=A[j];
                pos=j;
            }
        }
        temp=A[i];
        A[i]=A[pos];
        A[pos]=temp;
    }
}
