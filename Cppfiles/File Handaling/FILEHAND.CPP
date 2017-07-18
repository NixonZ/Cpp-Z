#include<fstream.h>
#include<conio.h>
#include<ctype.h>
ofstream fout;
ifstream fin;
void if_open()
{
 fin.open("myfile.txt");
}
void display(int a)
{
 if_open();
 fin.seekg(a);
 char ch;
 while(fin>>ch)
 {
  cout<<ch;
 }
 fin.close();
}
void display()
{
 if_open();
 char ch;
 while(fin>>ch)
 {
  cout<<ch;
 }
 fin.close();
}
int charc()
{
 if_open();
 int a=0;
 char ch;
 while(!fin.eof())
 {
  fin>>ch;
  if(isalnum(ch))
   a++;
 }
 fin.close();
 return a-1;
}
void main()
{
 clrscr();
 cout<<"The file reads as follows:\n";
 display();
 cout<<"\nNo. of characters ="<<charc()<<endl;
 int x;
 do
  {
   cout<<"From which position do you want to write?\n";
   cin>>x;
   if(x<charc())
   {
    display(x);
    break;
   }
  }while(1);
 cout<<"\nFile pointer is at " <<fin.tellg();
 getch();
}