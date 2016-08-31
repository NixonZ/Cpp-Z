#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the no. of rows\n";
    int x,a;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        a=1;
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<a;
            (j<i)?a++
                   :a--;
        }
        cout<<endl;
    }
}
