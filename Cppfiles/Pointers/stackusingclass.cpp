#include<iostream>
using namespace std;
typedef node
{
    int x;
    node *next;
};
class stack
{
    node *top;
public:
    stack()
    {
        top=nullptr;
    }
    void push(int val)
    {
        node *temp=new node;
        temp->x=val;
        temp->next=top; // the linking arrows fall down
        top=temp;
    }
    void pop()
    {
        if(top==nullptr)
        {
            cout<<"stack underflow\n"
            return;
        }
        else
        {
            node *temp=new node;
            temp=top;
            top=top->next;
            delete temp;
        }
    }
    void display()
    {
        node *temp=new node;
        cout<<'{';
        temp=top;
        while(temp->next!=nullptr)
        {
            cout<<temp->x<<',';
            temp=temp->next;
            cout<<"\b}\n";
        }
    }
    ~stack()
    {
        node *temp=new node;
        while(temp->next!=nullptr)
        {
            temp=top;
            top=top->next;
            delete top;
        }
    }
};
int main()
{
    stack stack1;
    stack1.push(3);
    stack1.push(4);
    stack1.pop();
    stack1.push(5);
    stack1.display();
}