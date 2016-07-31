#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int x,i;
    cout<<"insert a no."<<endl;
    cin>>x;
    for(i=1;i<=10;i++){
        cout<<pow(x,(1.0/i))<<endl <<i <<endl;
    }
    return(0);
}
