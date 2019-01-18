#include <stdio.h>

char* getstring()
{
	char str[] = "print it";
	return str;			// may print garbage of NULL because str[] is destroyed once the functions activation record is deleted
}						//warning : function returns address of local variable

int main()
{
	printf("%s",getstring());
return 0;
}
