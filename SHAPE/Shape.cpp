#include <iostream>
#include "Shape.h"
using namespace std;
float pi = 3.14159265359;

class Circle:public SHAPE{
	float r;
public:
	void name()
	{
		cout << "Circle" << endl;
	}
	void perimeter(float r)
	{
		cout << "The perimeter is" << 2 * pi*r << endl;
	};
	void area(float)
	{
		cout << "The area is" << pi*r << endl;
	};
	void draw();
	bool is_closed() { return true; }
};

class Triangle:public SHAPE{
	float l, b, h;
public:
	void name()
	{
		cout << "Triangle" << endl;
	};
	void perimeter(float l,float b,float h)
	{
		cout << "The perimeter is" << l + b + h << endl;
	};
	void area(float)
	{
		cout << "The area is" << (h*b)*0.5 << endl;
	};

	void draw();
	bool is_closed() { return true; }
};

class Rectangle:public SHAPE{
	float l, b;
public:
	void name()
	{
		cout << "Rectangle" << endl;
	};
	void perimeter(float l, float b)
	{
		cout << "The perimeter is" << 2*(l+b) << endl;

	}

	void area(float)
	{
		cout << "The area is" << l*b << endl;
	}
	void draw();
	bool is_closed() { return true; }
};

int main()
{
	char shapes[10];

};