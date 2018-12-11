#include"main.h"
void deletion(int A[],int ele, int &T)
{
    int pos;
    ssort(A,T);
    pos=bsearch(A,ele,T);
    for(int i=pos;i<T-1;i++)
    {
        A[i]=A[i+1];
    }
    T--;
}
