#include<iostream>
using namespace std;

int main()
{
	const int i = 10;
	int const a = 10;	//both are const integers
	
	//i++;	//error:increment of read only memory
	//a++;  //error:increment of read only memory
	
	cout<<i<<endl;
	
	int j = 10;
	
	const int &k = i;	//read right to left ; k is a reference to an integer which is constant
	
	j++;

	//k++;	//error:increment of read only memory

	cout<<j<<endl;	
	
	int const &l = j;	//read right to left ; l is a const reference to an integer

	//l++;	//error:increment of read only memory

	cout<<j<<endl;

	const int x = 10;
	int &r = x;	//error: binding value of type 'const int' to reference to type 'int' drops 'const' qualifier
	
	return 0;
}
