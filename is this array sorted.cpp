#include <iostream>
using namespace std;

bool func(int *arr,int i,int size)
{
    if(size == 1)
		return true;
    
	if(i == size)
		return true;

	if(arr[i] > arr[i-1])
	{
	    i++;
	    return func(arr,i,size);
	}
	else
		return false;
}

int main()
{
	int a[]={1,2,3,4,5,4};
	cout<<func(a,1,6);
	return 0;
}
