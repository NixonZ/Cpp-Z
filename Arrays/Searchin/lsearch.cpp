#include"../main.h"

int lsearch(int A[],int temp,int T)
{
    int check=0;
    int k;
    for(k=0;k<T;k++)
    {
        if(A[k]==temp)
        {
            check=1;
            cout<<"Element found at " <<k <<" index\n";
            break;
        }
    }
    if(!check)
        cout<<"Element not found\n";
    return k;
}
