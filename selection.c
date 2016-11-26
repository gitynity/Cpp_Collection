/*
Program for selection sort
*/
#include <stdio.h>

void swap(int *a , int *b);
void print(int x[] , int size);
void main()
{

int a[] = {2,4,6,3,7,1,8,0,9,5};
int i=0 , min , j;

print(a,10);

for( i = 0 ; i < 10 ; i++ )
{
	min = i;
	
	for ( j = i+1 ; j < 10 ; j++ )
	{
		if ( a[j] > a[min] )
			{
				swap( &a[j] , &a[min]);
			}	
	}
}			
printf("Sorted\n");
print(a,10);
}

void print(int x[],int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("\n%d\n",x[i]);
	}
}

void swap(int *a , int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}