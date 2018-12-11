#include<iostream>
using namespace std;
class rectangle
{
	float length, width;
public:
	void setlength(float);
	void setwidth(float);
	float perimeter();
	float area();
	void show();
	int sameArea(rectangle);
};
void rectangle::setlength(float a)
{
	length = a;
}
void rectangle::setwidth(float a)
{
	width = a;
}
float rectangle::perimeter()
{
	return 2 * (length + width);
}
float rectangle::area()
{
	return width*length;
}
void rectangle::show()
{
	cout << "\nLength:" << length << "\nWidth:" << width;
}
int rectangle::sameArea(rectangle A)
{
	if (area()==A.area())
		return 1;
	else
		return 0;
}
int main()
{
	rectangle A, B;
	float temp;
	cout << "Enter the length and width of first rectangle\n";
	cin >> temp;
	A.setlength(temp);
	cin >> temp;
	A.setwidth(temp);
	cout << "Enter the length and width of second rectangle\n";
	cin >> temp;
	B.setlength(temp);
	cin >> temp;
	B.setwidth(temp);
	if (A.sameArea(B))
		cout << "They have same area\n";
	else
		cout << "Not same area\n";
	cin.get();
	cin.get();
}