#ifndef NALIN_H_INCLUDED
#define NALIN_H_INCLUDED
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

int wherex()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.X;
  }

int wherey()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.Y;
  }
int fact(int a)
{
    if(a==1)
        return 1;
    else
        return a*fact(a-1);
}
class stack
{
	int A[100];
	int top;
	int size;
public:
	stack()
	{
		size = 100;
		top = -1;
	}
	stack(int a)
	{
		size = a;
		top = -1;
	}
	void push(int ele)
	{
		if (top == size - 1)
		{
			cout << "Stack overflow, cannot add to this stack\n";
			return;
		}
		else
			A[++top] = ele;
	}
	void pop()
	{
		if (top == -1)
		{
			cout << "Stack is empty, cannot pop anymore elements\n";
			return;
		}
		else
			--top;
	}
	void display()
	{
		cout << '{';
		for (int i = 0; i < size; i++)
		{
			cout << A[i] << ',';
		}
		cout << "\b}";
	}
};
class queue
{
	int rear, front;
	int A[100];
	int size;
public:
	queue(int a=100)
	{
		front = rear = -1;
		size = a;
	}
	void insert(int ele)
	{
		if (rear == size - 1)
		{
			cout << "Queue overflow\n";
			return;
		}
		else if (front == -1)
		{
			front++;
			A[++rear] = ele;
		}
		else
		{
			A[++rear] = ele;
		}
	}
	void delete()
	{
		if (front == -1)
		{
			cout << "Queue underflow\n";
			return;
		}
		else if (front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front++;
		}
	}
};
#endif // NALIN_H_INCLUDED
