#include <iostream>
using namespace std;
//working with operators
class point
{
	float x;
	float y;
	float z;
public:
	point()
	{
		x=0;
		y=0;
		z=0;
	}
	point(float a,float b,float c)
	{
		x=a;
		y=b;
		z=c;
	}
	point(point &C)
	{
		x=C.x;
		y=C.y;
		z=C.z;
	}
	void display()
	{
		cout<<'('<<x<<','<<y<<','<<z<<')';
	}
	friend point& operator +(point& a,point& b);
	friend point& operator -(point& a,point& b);
	friend float operator *(point& a,point& b);
	friend point& operator ^(point& a,point& b);
}foo;
point& operator +(point& a,point& b)
{
	foo.x=a.x+b.x;
	foo.y=a.y+b.y;
	foo.z=a.z+b.z;
	return foo;
}
point& operator -(point& a,point& b)
{
	foo.x=a.x-b.x;
	foo.y=a.y-b.y;
	foo.z=a.z-b.z;
	return foo;
}
float operator *(point& a,point& b)
{
	return a.x*b.x+a.y*b.y+a.z*b.z;
}
point& operator ^(point &a,point& b)
{
	foo.x=a.y*b.z-a.z*b.y;
	foo.y=b.x*a.z-a.x*b.z;
	foo.z=a.x*b.y-b.x*a.y;
	return foo;
}
int main()
{
	point A(1.0,1.0,1.0),B(float(5.0/3.0),float(2.0/3.0),float(2.0/3.0));
	point C(A^A^A^B^B);
	C.display();
}
