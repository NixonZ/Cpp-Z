#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,x,y; int p=1;
    cout<<"enter the no, whose power has to be displayed\n";
    cin>>x;
    cout<<"Enter the power of"
    <<x <<endl;
    cin>>y;
    for(i=1;i<=y;i++){
        p=p*x;
    cout<<endl<<x <<'^' <<i <<'=' <<p;}
}
