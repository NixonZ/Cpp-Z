#include<iostream>
using namespace std;
struct date
{
    int dd;
    int mm,yy;
};
int check_date(date c)
{
    if((c.mm>0&&c.mm<=12)&&(c.dd>0&&c.dd<=31)&&c.yy>0)
    {
        if(c.mm%2==0&&c.dd>30)
            return 0;
        else if(c.mm==2&&c.dd>28)
        {
            if(c.dd==29&&c.yy%4==0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}
date_out(date a)
{
    if(check_date(a))
    {
        cout<<a.dd<<'/'<<a.mm<<'/'<<a.yy;
    }
}
date_in(date &a)
{
    cout<<"Date=";cin>>a.dd;
    cout<<"Month=";cin>>a.mm;
    cout<<"year="; cin>>a.yy;
}
int date_cmp(date a,date b)
{
    if(a.yy>b.yy)
        return 1;
    else if(b.yy>a.yy)
        return 0;
    else if(a.mm>b.mm)
        return 1;
    else if(b.mm>a.mm)
        return 0;
    else if(a.dd>b.dd)
        return 1;
    else if(a.dd<b.dd)
        return 0;
    else
        return 7;
}
int main()
{
    int y=0;
    date d1,d[2];
    cout<<"Enter the date\n";
    date_in(d1);
    (check_date(d1))?cout<<"The date is correct\n":cout<<"The date is not correct\n";
    cout<<"Enter two dates\n";
    cout<<"Date 1\n";
    date_in(d[0]);
    cout<<"Date 2\n";
    date_in(d[1]);
    if(!check_date(d[0])&&!check_date(d[1]))
    {
        cout<<"one of the date is wrong\n";
        y=1;
    }
    int x=date_cmp(d[0],d[1]);
    if(y=1);
    else if(x==7)
    {
        cout<<"The dates are equal and are\n";
        date_out(d[0]);
    }
    else
    {
        cout<<"The later date is\n";
        if(date_cmp(d[0],d[1]))
            date_out(d[0]);
        else
            date_out(d[1]);
    }
}
