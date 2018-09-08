#include <stdio.h>

int encryption_check(char* s , char* t)
{
	int	i=0 , diff = t[0] - s[0];
while(s[i]!='\0' && t[i]!='\0')
{
	if(t[i]-s[i]<=0)
		{
			break;
			return -1;
		}	
	
	else if(t[i]-s[i]!=diff)
		{
			break;
			return -1;
		}
	
	else if(t[i]-s[i]==diff)
		continue;
		
}
	return diff;	
}

int main()
{
	int q;	//number of test cases
	char s[3] , t[3];	// s=plain text and t=cipher text
	printf("Number of tetcases: \n");
	scanf("%d",&q);
	while(q--)
	{
		scanf("%s",s);
		scanf("%s",t);
		
			printf( "%d",encryption_check(s,t) );
	}
	
	return 0;
}
