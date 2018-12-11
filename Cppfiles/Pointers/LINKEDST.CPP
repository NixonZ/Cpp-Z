#include<iostream>
using namespace std;
struct stack
{
 int no;
 stack *next;
}*top,*save,*last,*first;
stack *new_node(int value)
{
 stack *p=new stack;
 p->no=value;
 p->next=nullptr;
 return p;
}
void push(stack *p)
{
 save=top;
 top=p;
 save->next=p;
}
void pop()
{
 if(top==nullptr)
  cout<<"Stack underflow\n";
 else
 {
  save=top;
  top=last;
  delete save;
 }
}
void main()
{
 cout<<"Enter values (0 to exit)\n";
 int x;
 do
 {
  cin>>x;
  if(x==0) break;
  push(new_node(x));
 }while(1);
 stack *p=NULL;
 p=first;
 cout<<'{';
 while(p!=top)
 {
  cout<<p->no<<',';
  p=p->next;
 }
 cout<<"\b}";
}

