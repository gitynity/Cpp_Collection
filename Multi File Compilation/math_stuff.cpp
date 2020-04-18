#include "math_utils.h"
#include <iostream>

using namespace std;

int main()
{
	Rectangle r1;
	r1.length = 5;
	r1.width = 2;

	Rectangle sq;
	sq.length = 10;
	sq.width = 10;
	
	cout<<area(r1)<<endl;
	
	cout<<area(sq)<<endl;

	cout<<area(9)<<endl;

	cout<<area(10,3)<<endl;

	return 0;
}
