#include<stdio.h>
void f(int i, int j , int k)    //order of evaluation of i , j , k is not gauranteed
{
	printf("%d\n%d\n%d\n",i,j,k);
}

int main()
{
	int i =10;
	f(i++,i++,i++); //since order of evaluation of i++ is not gauranteed , it is undefined behaviour
                    //function may print 12 11 10 or 11 12 10 or 11 10 12 etc. 
                    //Arguements in c function have no specific order of evaluation
}