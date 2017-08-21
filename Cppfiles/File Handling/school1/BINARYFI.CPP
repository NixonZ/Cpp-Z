#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
int count;
class medical
{
 int code;
 float cost, s_tax;
 char medi_name[30],type[20];
public:
void getdata()
{
 cout<<"Enter the name of the medicine:";
 gets(medi_name);
 cout<<"Enter code :";
 cin>>code;
 cout<<"Enter type of the medicine :";
 gets(type);
 cout<<"Enter cost :";
 cin>>cost;
 cout<<"Enter sales tax percentage :";cin>>s_tax;
}
int getcode()
 {
  return code;
 }
void display()
 {
  cout<<"medicine name :"<<medi_name;
  cout<<"\n Code :"<<code;
  cout<<"\n Type :"<<type;
  cout<<"\n Cost :"<<cost;
 }
}s[10];
void write_file(int c)
{
 ofstream fout("medicine.dat",ios::binary|ios::out);
 count=c;
 for(int i=0;i<count;i++)
 {
  fout.write((char *)&s[i],sizeof(s));
 }
 fout.close();
}
void read_file()
{
 ifstream fin("medicine.dat",ios::binary|ios::in);
 medical a[10];
 for(int i=0;i<count;i++)
 {
  if(fin.eof())
   break;
  fin.read((char *)&a[i],sizeof(s));
  if(fin.eof())
   break;
  a[i].display();
  cout<<endl;
 }
 getch();
 fin.close();
}
void delete_file(int c)
{
 fstream f("medicine.dat",ios::binary|ios::in|ios::out);
 medical a[10];
 medical temp;
 int check=0;
 for(int i=0;i<count;i++)
 {
  f.read((char *)&a[i],sizeof(s));
  cout<<a[i].getcode() <<' ' <<c <<endl;
  if(c==a[i].getcode())
   {
    check=1;
    while(!f.eof())
    {
     f.seekp(1,ios::cur);
     f.read((char *)&temp,sizeof(s));
     f.seekp(-1,ios::cur);
     f.write((char *)&temp,sizeof(s));
    }
    count--;
   }
 }
 if(!check)
  cout<<"Record not found\n";
 f.close();
}
void search_file(int c)
{
 ifstream fin("medicine.dat",ios::binary);
 medical a[10];
 int check=0;
 for(int i=0;i<count;i++)
 {
  fin.read((char *)&a[i],sizeof(s));
  cout<<a[i].getcode() <<' ' <<c <<endl;
  if(c==a[i].getcode())
   {
    check=1;
    cout<<"Medicine found\n";
    a[i].display();
    break;
   }
 }
 if(!check)
  cout<<"Record not found\n";
 fin.close();
}
void modify_rec(int c)
{
 fstream f("medicine.dat",ios::binary|ios::in|ios::out);
 medical a[10];
 int check=0;
 for(int i=0;i<count;i++)
 {
  f.read((char *)&a[i],sizeof(s));
  cout<<a[i].getcode() <<' ' <<c <<endl;
  if(c==a[i].getcode())
   {
    check=1;
    cout<<"Medicine found\nModify the record\n";
    a[i].getdata();
    cout<<"\n\"\"" <<f.tellp() <<"\'\'\'\\\n";
    f.seekg(-1,ios::cur);
    cout<<"\n\"\"" <<f.tellp() <<"\'\'\'\\\n";
    f.write((char *)&a[i],sizeof(s));
    break;
   }
 }
 if(!check)
  cout<<"Record not found\n";
 f.close();
}
void main()
{
 clrscr();
 int no;
 cout<<"Enter the no. of objects(<3)\n";
 cin>>no;
 for(int i=0;i<no;i++)
 {
  s[i].getdata();
 }
 int x,temp;
 do
 {
  cout<<"\nEnter choice\n1-Write file\n2-Read file\n3-Delete file\n4-Search file\n5-Modify records\n6-exit\n";
  cin>>x;
  switch(x)
  {
   case 1: write_file(no);
	   break;
   case 2: read_file();
	   break;
   case 3: cout<<"Enter the code to be deleted\n";
	   cin>>temp;
	   delete_file(temp);
	   break;
   case 4: cout<<"Enter the code to be searched\n";
	   int temp,c;
	   cin>>temp;
	   search_file(temp);
	   break;
   case 5: cout<<"Enter the code to be searched\n";
	   cin>>temp;
	   modify_rec(temp);
	   break;
   case 6: break;
   default : cout<<"Wrong input\n";
  }
 }while(x!=6);
}
