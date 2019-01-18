//Find index in the array such that sum to the left of it = sum to the right of it

#include <stdio.h>

int main()
{
	int i=0,sum=0 , check=0;
	int arr[] = {3,5,14,1,-6,1,2,9,8,3};
	
	for(i=0;i<10;i++)
	sum+=arr[i];
	
	for(i=0;i<9;i++)
	{
		check+=arr[i];
		if(check== (sum-arr[i+1])/2 )
			break;
	}
	if(i>8)
	printf("No such index exists\n");
	else
	printf("Index = %d",i+1);
	return 0;
}
