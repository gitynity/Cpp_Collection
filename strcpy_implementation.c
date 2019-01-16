#include <stdio.h>
#include <stdlib.h>
void copy(char*s , char*t)
{
	while(*s++ = *t++);	//As soon as NUll ('\0') is copied the value of expression becomes Null i.e 0
}                               //because value of an expression = value of LHS
                                // And then the loop stops.
main()
{
	char a[]="hello";
	char *b = (char*)malloc(sizeof(a));
	copy(b,a);
	
	printf("a = %s , b = %s",a,b);
}
