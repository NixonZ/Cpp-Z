#include"../main.h"
int bsearch(int A[], int temp,int T)
{
    int beg,last,mid,check;
    check=0;
    beg=0;
    last=T-1;
    for(int i=0;i<T;i++)
    {
        mid=(beg+last)/2;
        if(temp<A[mid])
            last=mid-1;
        else if(temp>A[mid])
            beg=mid+1;
        else
        {
            check=1;
            cout<<"Element found at index " <<mid <<endl;
            break;
        }
    }
    if(!check)
        cout<<"Element not found\n";
    return mid;
}
