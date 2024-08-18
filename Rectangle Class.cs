#include<iostream>
using namespace std;

class Rectangle
{
private:
	int lenght;
	int width;

public:
	Rectangle(int, int);
	Rectangle(const Rectangle&); // Copy constructor
	void Print();
	int Area();
	void SetLenght(int);
	void SetWidth(int);
	int GetLenght();
	int GetWidth();
	~Rectangle();
};

int Rectangle::GetLenght()
{
	return lenght;
}

int Rectangle::GetWidth()
{
	return width;
}

void Rectangle::SetLenght(int l)
{
	lenght = l;
}

void Rectangle::SetWidth(int w)
{
	width = w;
}

int Rectangle::Area()
{
	return lenght * width;
}

Rectangle::~Rectangle()
{
	cout << "\nDestructor Called for Rectangle " << this << " :\t";
	Print(); //this->Print();
}

Rectangle::Rectangle(int l = 0, int w = 0)
{
	cout << "\nConstructor Called for " << this << " with parameters " << l << " and " << w << "\n";
	lenght = l;
	width = w;
}
// Copy constructor
Rectangle::Rectangle(const Rectangle& other)
{
	cout << "\n\n\nCopy Constructor Called\n\n\n";
	lenght = other.lenght;
	width = other.width;
}
void Rectangle::Print()
{
	cout << lenght << " X " << width << endl;
}

void main()
{

	Rectangle r1;
	cout << "Rectangle 1:\t";
	r1.Print();

	Rectangle r2(5, 10);
	cout << "Rectangle 2:\t";
	r2.Print();

	cout << "Testing Built-in Assignment Operator: r1 = r2\n\n";
	r1 = r2;	//Built-in Assignment Operator

	cout << "Rectangle 1:\t";
	r1.Print();

	cout << "Rectangle 2:\t";
	r2.Print();

	cout << "Area of Rectangle 1:\t" << r1.Area() << endl;
	cout << "Area of Rectangle 2:\t" << r2.Area() << endl;

}