#include <stdio.h>
#include <string.h>
main()
{
	char s[] = "Good";
	char t[] = "World";
	
	char* u = "Mad";
	char* v = "World";
	
	printf("%s",strcat(s,t));
	
	//printf("%s",strcat(u,v));	//Segmentation Fault --> because u and v are string constants , they stay in read-only memory

	//printf("%s",strcat(s,u)); //Segmentation Fault --> because u and v are string constants , they stay in read-only memory
}
