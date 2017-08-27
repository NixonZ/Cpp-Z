#include"main.h"
void insertion(int A[],int ele,int pos,int &T)
{
    for(int i=T-1;i>=pos;i--)
        A[i+1]=A[i];
    A[pos]=ele;
    T++;
}
