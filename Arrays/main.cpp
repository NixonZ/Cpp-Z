#include"main.h"
int main()
{
    int T;
    cout <<"Enter the number of elements in array\n";
    cin>>T;
    system("cls");
    int A[T+100];
    for(int i=0;i<T;i++)
    {
        cout<<"A[" <<i+1 <<"]:";
        cin>>A[i];
    }
    int x,y;
    do
    {
        cout<<"1-Searching\n2-Sorting\n3-Deletion\n4-Insertion\n5-Display\n(press 0 to exit any time)\n";
        cin>>x;
        switch(x)
        {
            case 1:
                system("cls");
                cout<<"Enter the element to be searched\n";
                int temp;
                cin>>temp;
                do
                {
                    cout<<" 1-Linear search\n 2-Binary search\n3-go back\n";
                    cin>>y;
                    switch(y)
                    {
                        case 1: lsearch(A,temp,T); break;
                        case 2: bsearch(A,temp,T); break;
                        case 3: break;
                        case 0: return 0; break;
                        default: cout<<"Wrong input\n";
                    }
                }while(y!=3);
                break;
            case 2:
                system("cls");
                do
                {
                    cout<<" 1-Selection Sort\n 2-Bubble Sort\n3-Insertion Sort\n4-merge sort\n5-Go back\n";
                    cin>>y;
                    switch(y)
                    {
                        case 1: ssort(A,T); break;
                        case 2: bsort(A,T); break;
                        case 3: isort(A,T); break;
                        case 4: msort(A,T); break;
                        case 5: break;
                        case 0: return 0;
                        default: cout<<"Wrong input\n";
                    }
                }while(y!=5);
                break;
            case 3:
                system("cls");
                cout<<"Enter the element to be searched\n";
                int t;
                cin>>t;
                deletion(A,t,T);
                break;
            case 4:
                system("cls");
                cout<<"Enter the element to be entered\n";
                int ele,pos;
                cin>>ele;
                cout<<"Enter the position\n";
                cin>>pos;
                insertion(A,ele,pos,T);
                break;
            case 5:
                cout<<'{';
                for(int i=0;i<T;i++)
                    cout<<A[i]<<',';
                cout<<"}\n";
                break;
            case 0: return 0;
            default: cout<<"Wrong input\n";
        }
    }while(x!=0);
    return 0;
}
