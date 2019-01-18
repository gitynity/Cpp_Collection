#include <stdio.h>

int main()
{
	
	long long number;
	char* name;
	FILE * ptr;
	ptr = fopen("/home/ubuntu/myfile.txt" , "w");
	
	
	
	if(ptr == NULL)
	printf("Error Opening file!!\n");
	else 
	{
		printf("File successfully opened!!\n");
		
		printf("Enter your name and phone number: \n");
		scanf("%s %lld", name , &number);
		fprintf(ptr , "\tWELCOME!\n");
		fprintf(ptr , "Name \t\t Number\n");
		fprintf(ptr ,"%s \t %lld\n", name , number);
		fclose(ptr);
	}
	
	ptr = fopen("myfile.txt" , "a");
	
	if(ptr == NULL)
	printf("Error Opening file!!\n");
	else 
	{
		printf("File successfully opened!!\n");
	
	
	printf("Enter your name and phone number: \n");
	scanf("%s %lld", name , &number);
	fprintf(ptr ,"%s \t %lld\n", name , number);
	
	fclose(ptr);
   }
	return 0;
}
