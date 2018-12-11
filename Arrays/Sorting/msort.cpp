#include"../main.h"
void msort(int A[], int m)
{
    int n;
    cout<<"Enter the elements in second array\n";
    cin>>n;
    int B[n];
    for(int i=0;i<n;i++)
    {
        cout<<"B[" <<i+1 <<"]:";
        cin>>B[i];
        cout<<endl;
    }
    isort(A,m);
    bsort(B,n);
    int i=0,j=0,k=0;
    int C[m+n];
    while((i<m)&&(j<n))
    {
        if(A[i]<B[j])
            C[k++]=A[i++];
        else
            C[k++]=B[j++];
    }
    while(i<m)
        C[k++]=A[i++];
    while(j<n)
        C[k++]=B[j++];
    cout<<"The new sorted array is\n{";
    for(i=0;i<m+n;i++)
        cout<<C[i]<<',';
    cout<<"}\n";
}
