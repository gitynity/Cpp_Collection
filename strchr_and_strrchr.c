
#include <stdio.h>
#include <string.h>

main()
{
	char * A = "Programme";
	//printf("first occurnce of r is at  %p  , second occurnce of r is at  %p",strchr(A,'r') , strrchr(A,'r'));
	
	printf("first occurnce of r from front is at  %d  , first occurnce of r from back is at  %d",( strchr(A,'r') - A ) , (strrchr(A,'r') -A ));
}
