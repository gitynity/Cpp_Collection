#include<iostream>
#include<string>

using namespace std;

void swap(int a , int b)
{
}

int swap(int&a , int&b)
{
	return 0;
}

int main()
{
	int a , b;
	swap(a,b);		// error: call of overloaded ‘swap(int&, int&)’ is ambiguous
	
					//This fails because it is not function overloading
					
					//Both functions have the same signatures. both have same name & both accept two integers as parameters
					
					//Note that in C++ function return type has no role in deciding function overloading
	return 0;
}
