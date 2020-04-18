#include "math_utils.h"

double pow(double base , int pow)
{
	int total = 1;
	for(int i=0;i<pow;i++)
		total = base*total;

	return total;
}

double area(double length , double width)
{
	return length*width;
}

double area(double length)
{
	return pow(length);
}

double area(Rectangle r)
{
	return r.length*r.width;
}

