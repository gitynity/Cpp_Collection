#include<iostream>
#include<string>

using namespace std;

void swap(int a , int b)
{
}

int swap(int a , int b)
{	
}

int main()
{
	int a , b;
	swap(a,b);		//error: ambiguating new declaration of ‘int swap(int, int)’
	return 0;
}
