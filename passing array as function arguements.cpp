#include<iostream>

using namespace std;

void modify_array(int arr[] , int size)
{
	for(int i=0;i<size;i++)
	{
		arr[i]++;
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"The address of pointer arr "<<&arr<<endl;		//different address
	
	cout<<"The address of array arr " <<&(*arr)<<endl;			
}
int main()
{
	int a[] = {1,2,3};
	
	modify_array(a,3);
	
	for(int i = 0;i<3;i++)
		cout<<a[i]<<" ";
	
	cout<<endl<<"The address of array a "<<&a<<endl;	
	
/*
When we pass array into functions as arguements , by_default they decay to pointers , 
i.e only the address of the first element of the array is passed as the arguement.
Here also same thing happened. 'a' is an array but when passed in the function modify_array() as an arguement ,
only a pointer to the first element of array is passed. 
Now the formal parameter 'arr' gets this address. 
That's why though 'a' and 'arr' have different address , the array 'a 'is modified
Because both of them point to the same array , a. 
To make it more clear ....
See the statement cout<<"The address of array arr " <<&(*arr)<<endl;  -->it is the same address as that of the arrray 'a'

*/
	return 0;
	}
