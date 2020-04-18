#include<iostream>

using namespace std;

struct Rectangle
{
		double length;
		double width;
};

double area(double length , double width)
{
	return length*width;
}

double area(double length)
{
	return length*length;
}

double area(Rectangle r)
{
	return r.length*r.width;
}

int main()
{
	Rectangle rec;
	rec.length = 10;
	rec.width = 5;
	
	Rectangle sq;
	sq.length = 5;
	sq.width = 5;
	
	cout<<area(rec)<<endl;
	
	cout<<area(10,5)<<endl;
	
	cout<<area(5)<<endl;
	
	cout<<area(sq)<<endl;
	
	return 0;
}
