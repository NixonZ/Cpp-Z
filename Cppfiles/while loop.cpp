#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    float x;
    int i=1;
    cout<<"enter a no.\n";
    cin>>x;
    while(i<=10){
        cout<<x <<'*'<<i <<'=' <<(float)x*i<<endl;
        i++;
    }
    cout<<endl;
    i--;
    for(;i>=1;--i){
        cout<<x<<'^'<<i <<'=' <<pow(x,i)<<endl;
    }
    return(0);
}
