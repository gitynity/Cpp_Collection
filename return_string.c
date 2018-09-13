#include <stdio.h>
#include <string.h> 
 char* f()
 {
	 return "hello world";	//"hello world" will be returned as read only text
 }
 
 int main()
 {
	char* str =f();
	strcpy(str,"hai");	//trying to write on read only memory 
	printf("%s",str);	//to be able to modify the result obtained we should copy it in some temporary array.
				// So that we no longer work with read only memory 
	 return 0;
 }
