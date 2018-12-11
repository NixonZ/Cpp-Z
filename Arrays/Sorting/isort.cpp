#include"../main.h"
void isort(int A[], int T)
{
    int i,j,temp;
    for(i=1;i<T;i++)
    {
        temp=A[i];
        j=i-1;
        while((temp<A[j])&&(j>=0)) //after selecting the to be inserted element
        {                          // we are going one step behind to sorted array
            A[j+1]=A[j];           //and inserting the element in suitable place
            j--;                   //by shifting each element by one place ahead till loop closes
        }
        A[j+1]=temp;               //element copied to suitable place
    }
    cout<<"Array has been sorted\n";
}
