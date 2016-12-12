#include<iostream>
using namespace std;
struct dist
{
    int feet;
    int inches;
};
int main()
{
    dist add(dist a[]);
    dist d[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the distance"<<i+1<<"(in feet and inches)\n";
        cin>>d[i].feet;
        cin>>d[i].inches;
    }
    dist D=add(d);
    cout<<"The final distance is: " <<D.feet<<" feet and "<<D.inches<<" inches";
}
dist add(dist a[])
{
    dist temp;
    temp.feet=0;
    temp.inches=0;
    for(int i=0;i<2;i++)
    {
        temp.feet+=a[i].feet;
        temp.inches+=a[i].inches;
    }
    temp.feet+=temp.inches/12;
    temp.inches=temp.inches%12;
    return temp;
}
