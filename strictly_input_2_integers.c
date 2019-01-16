#include <stdio.h>

int main()
{
int x , y , sn=0;
  
 printf("\nEnter 2 numbers: \n");
 sn = scanf("%d%d", &x , &y);
 if(sn!=2)
	printf("Bad input\n");
return 0;
}
