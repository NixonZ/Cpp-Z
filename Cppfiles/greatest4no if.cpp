#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"please enter 4 no.\n";
    cin>>a>>b>>c>>d;
    (a>=b)? (a>=c)?(a>=d)?cout<<a <<"  is the greatest"
                         :cout<<d <<"  is the greatest"
                  :(c>=d)?cout<<c <<"  is the greatest"
                         :cout<<d <<"  is the greatest"

          : (b>=c)?(b>=d)?cout<<b <<"  is the greatest"
                         :cout<<d <<"  is the greatest"
                  :(c>=d)?cout<<c <<"  is the greatest"
                         :cout<<d <<"  is the greatest";
}
