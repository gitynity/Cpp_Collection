#include<iostream>

using namespace std;

void read_comment()
{
	cout<<"The array arr is passed as a const in the 'modify_array()', which means it cannot be modified.\n"
	"But then inside the function 'modify_array()', we are calling another function 'do_something()' \n"
	"which takes an array as input , but does not use 'const' to promise that it wont modify the array.\n"
	"So if the function 'do_something()' somehow modifies the array , it will be a 'break of trust' shown by modify_array() \n" 
	"Therefore , it generates a compiler error , to stop the function 'do_something()' from modifying array.\n"

	"So if we want to call a function inside the function 'modify_array()' which takes an integer array (or int*) as input\n"
	"it will also have to use the 'const' to keep the promise of not modifying array passed as arguement.  "<<endl;
}

void do_something(int data[] , int size)
{
	for(int i = 0;i < size;i++)
		data[i]++;
}

void modify_array( const int arr[] , int size)
{
	for(int i=0;i<size;i++)
	{
			//arr[i]++;				//error : increment of read only location. So const does not allow any modification.
		cout<<arr[i]<<" ";
	}
	cout<<endl<<&arr<<endl;		//different address
	
	cout<<"The address of array arr " <<&(*arr)<<endl;			
	
	//do_something(arr , 3);		//error : inavalid conversion from (const int*) to int*
	
	read_comment();
	
	//The array arr is passed as a const in the 'modify_array()', which means it cannot be modified.
	//But then inside the function 'modify_array()', we are calling another function 'do_something()' 
	//which takes an array as input , but does not use 'const' to promise that it wont modify the array.
	//So if the function 'do_something()' somehow modifies the array , it will be a 'break of trust' shown by modify_array() 
	//Therefore , it generates a compiler error , to stop the function 'do_something()' from modifying array.

	//So if we want to call a function inside the function 'modify_array()' which takes an integer array (or int*) as input
	//it will also have to use the 'const' to keep the promise of not modifying array passed as arguement. 

}

int main()
{
	int a[] = {1,2,3};
	
	modify_array(a,3);
	
	for(int i = 0;i<3;i++)
		cout<<a[i]<<" ";
	
	cout<<endl<<"The address of array a "<<&a<<endl;	
	
	return 0;
}
