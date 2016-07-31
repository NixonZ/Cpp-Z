#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"please enter 4 no.\n";
    cin>>a>>b>>c>>d;
    if (a>=b){
             if(a>=c){
                     if(a>=d)
                     cout<<a <<"  is the greatest";
                     else
                     cout<<d <<"  is the greatest";
             }
             else if(c>=a){
                     if(c>=d)
                     cout<<c <<"  is the greatest";
                     else
                     cout<<d <<"  is the greatest";}
    }
    else if(b>=a){
                  if(b>=c){
                     if(b>=d)
                     cout<<b <<"  is the greatest";
                     else
                     cout<<d <<"  is the greatest";
             }
             else if(c>=b){
                     if(c>=d)
                     cout<<c <<"  is the greatest";
                     else
                     cout<<d <<"  is the greatest";}


}
    getch();
}
