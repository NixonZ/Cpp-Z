//Aim- to implement various functions related to text files
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void display()
{
 char A[20];
 int c=0;
 ifstream fin("poem.txt");
 while(!fin.eof())
 {
   fin.getline(A,20,' ');
   if(fin.eof()==1)
   break;
   cout<<A<<' ';
  c++;
 }
 fin.close();
}
int wordcount()
{
 char A[20];
 int c=0;
 ifstream fin("poem.txt");
 while(!fin.eof())
 {
   fin.getline(A,20,' ');
   if(fin.eof()==1)
    break;
   c++;
 }
 fin.close();
 return c;
}
int char_count()
{
 char A;
 int c=0;
 ifstream fin("poem.txt");
 while(fin>>A)
 {
  if(isalpha(A))
  c++;
 }
 fin.close();
 return c;
}
void lowercount_uppercount()
{
 ifstream fin("poem.txt",ios::in);
 char ch;
 int countup=0;
 int countlow=0;
 while(fin>>ch)
 {
  if(isupper(ch))
   countup++;
  else if(islower(ch))
   countlow++;
 }
 cout<<"\nNo. of upper case characters=" <<countup;
 cout<<"\nNo. of lower case characters=" <<countlow;
}
void lowertoupper()
{
 char A,ch;
 fstream f("poem.txt",ios::out|ios::in);
 while(!f.eof())
 {
  if(f.eof())
   break;
  f>>A;
  switch(A)
  {
   case 'a':
   case 'A':
   case 'e':
   case 'E':
   case 'i':
   case 'I':
   case 'o':
   case 'O': if(islower(A))
	     {
	      ch=toupper(A);
	      f.seekp(-1,ios::cur);
	      f<<ch;
	     }
	     break;
  }
 }
 f.close();
}
void vowels()
{
 char A;
 ifstream fin("poem.txt");
 ofstream fout("vowels.txt");
 while(fin>>A)
 {
  switch(A)
  {
   case 'a':
   case 'A':
   case 'e':
   case 'E':
   case 'i':
   case 'I':
   case 'o':
   case 'O': fout<<A;
	     break;
   default : break;
  }
 }
 fin.close();
 fout.close();
 fin.open("vowels.txt");
 char C;
 while(fin>>C)
 {
  if(fin.eof()==1)
   break;
  cout<<C;
 }
 fin.close();
}
int counti()
{
 ifstream fin("poem.txt",ios::in);
 char c[20];
 int count=0;
 while(!fin.eof())
 {
  fin.getline(c,20,' ');
  if(fin.eof()==1)
    break;
  if(c[0]=='i'||c[0]=='I')
   count++;
 }
 return count;
}
int dotcount()
{
 ifstream fin("poem.txt",ios::in);
 char c;
 int count=0;
 while(!fin.eof())
 {
  fin>>c;
  if(fin.eof()==1)
    break;
  if(c=='.')
   count++;
 }
 return count;
}
void main()
{
 clrscr();
 ofstream fout("poem.txt",ios::trunc);
 fout<<"if you are not willing to learn,\n "
     <<"No one can help you.\n "
     <<"If you are determined to learn,\n "
     <<"No one can stop you.";
 fout.close();
 int x;
 do
 {
  cout<<"\n1-Display file\n2-lower case to upper case\n3-total character\n4-no of words\n5-Average word size\n6-no of lower case and upper case\n7-vowels\n8-no of words starting with I\n9-no. of lines ending with '.'\n10-exit\n";
  cin>>x;
  switch(x)
  {
   case 1:display();
	  break;
   case 2:lowertoupper();
	  cout<<"\nFile with lower to upper\n";
	  display();
	  break;
   case 3:cout<<"\nNo. of characters="<<char_count();
	  break;
   case 4:cout<<"\nNo. of words="<<wordcount();
	  break;
   case 5:cout<<"\nAverage word size=" <<(float)(char_count())/(float)(wordcount());
	  break;
   case 6:lowercount_uppercount();
	  break;
   case 7:cout<<"\n\nVowels in the file are\n";
	  vowels();
	  break;
   case 8:cout<<"\nNo. of words starting with I=" <<counti();
	  break;
   case 9:cout<<"\nNo. of lines ending with \'.\'=" <<dotcount();
	  break;
   case 10: break;
   default: cout<<"Wrong input\n";
  }
 }while(x!=10);
}