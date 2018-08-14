#include<stdio.h>
int main(int argc, char const *argv[])
{
    int y[2][2] = {{1,2},{3,4}};
    int (*p)[2] = &y[1];	//if int (*p)[] = &y[1] then unspecified bound error. 
    p=p+1;
    printf("%p\n",p);
    return 0;
}
