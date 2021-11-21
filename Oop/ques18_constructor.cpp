#include <iostream>
using namespace std;

class point
{

public:
	int x, y;
	point()
	{
		x = 0;
		y = 0;
	}
	point(int a, int b)
	{
		x = a;
		y = b;
	}
	point(point &p)
	{
		x = p.x;
		y = p.y;
	}
	void display(point p)
	{
		cout << "x = " << p.x << ", y = " << p.y << endl;
	}
	~point()
	{
		cout << "good bye";
	}
};

int main()
{
	cout << "By using default constructor 1st object is :" << endl;
	point p1;
	p1.display(p1);
	int a, b;
	cout << "Enter a and b : \n";
	cin >> a >> b;
	cout << "By using parameterized constructor 2nd object is :" << endl;
	point p2(a, b);
	p2.display(p2);
	cout << "By using copy constructor 3rd object is :" << endl;
	point p3(p2);
	p3.display(p3);
	return 0;
}
