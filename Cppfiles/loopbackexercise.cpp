#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int age,g1=0,g2=0,g3=0;
    cout<<"enter the ages\nEnter 0 to stop\n";
    do{
            cin>>age;
   if (age!=0){ if(age>=26 && age<=35)
        g1++;
    else if(age>=36&& age<=45)
        g2++;
    else if(age>=46&& age<=55)
        g3++;
    else cout<<"Please enter a valid age\n";}
    }while(age!=0);
    cout<<"26-35="<<g1<<endl;
    cout<<"36-45"<<g2<<endl;
    cout<<"46-55"<<g3<<endl;
}
