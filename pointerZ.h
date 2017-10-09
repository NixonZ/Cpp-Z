#ifndef POINTERZ_H_INCLUDED
#define POINTERZ_H_INCLUDED
typedef node
{
    int no;
    node *next;
};
class stack
{
    node *top;
public:
    stack()
        top=nullptr;
    void push(int val)
    {
        node *temp=new node;
        temp->no=val;
        temp->next=top;
        top=temp;
    }
    void pop()
    {
        if(top==nullptr)
            cout<<"Stack underflow\n";
        else
        {
            node *temp=top;
            top=top->next;
            delete temp;
        }
    }
    void display()
    {
        node *temp=top;
        cout<<'{';
        while(temp!=nullptr)
        {
            cout<<temp->no<<',';
            temp=temp->next;
        }
        cout<<"\b}\n";
    }
    ~stack()
    {
        node *temp=top;
        while(temp!=nullptr)
        {
            top=top->next;
            delete temp;
        }
    }
};
class queue
{
    node *front,*rear;
public:
    queue()
        temp=rear=nullptr;
    void insert(int val)
    {
        node *temp=new node;
        temp->no=val;
        temp->next=nullptr;
        if(rear==nullptr)
            front=rear=temp;
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
    void del()
    {
        if(rear==nullptr)
            cout<<"Queue underflow\n";
        else if(rear=front)
        {
            delete rear;
            rear=front=nullptr;
        }
        else
        {
            node *temp=front;
            front=front->next;
            delete temp;
        }
    }
    void display()
    {
        node *temp=front;
        cout<<'{';
        while(temp!=nullptr)
        {
            cout<<temp->no<<',';
            temp=temp->next;
        }
        cout<<"\b}\n";
    }
    ~queue()
    {
        node *temp=front;
        while(temp!=nullptr)
        {
            temp=front->next;
            delete front;
            front=temp;
        }
    }
};


#endif // POINTERZ_H_INCLUDED
