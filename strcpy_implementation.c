#include <stdio.h>
#include <stdlib.h>
void copy(char*s , char*t)
{
	while(*s++ = *t++);
}

main()
{
	char a[]="hello";
	char *b = (char*)malloc(sizeof(a));
	copy(b,a);
	
	printf("a = %s , b = %s",a,b);
}
