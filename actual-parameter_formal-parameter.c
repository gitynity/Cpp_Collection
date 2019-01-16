#include <stdio.h>

int add(int a , int b)
{
	return a + b;
}

char addc(char c , char d)
{
	return c + d;
}
int main()
{
	printf("%d\n", add(23.4 , 6) );	
	printf("%c\n", add('c',4));
	printf("%d\n" , addc(354,460));		//354 and 460 coverted to character leads to overflow
}
//If the data type of actual parameter does not meet the data type of formal parameter ,
//then automatically the data type of actual parameter is changed to data type of formal parameter.
