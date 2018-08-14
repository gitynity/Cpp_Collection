#include<stdio.h>
int main(int argc, char const *argv[])
{
    int y[2][2] = {{1,2},{3,4}};
    int* p = &y[1];
    p=p+1;
    printf("%d\n",p);
    return 0;
}