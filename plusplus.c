#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x = 2;
    printf("%d",++x*++x*++x);   //this ouputs 80
    return 0;
}
