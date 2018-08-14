#include<stdio.h>
int main(int argc, char const *argv[])
{
    int c[]={2.8,3.4,4,6.7,5};
    int j,*p=c,*q=c;
    for(j=0;j<5;j++)
    {
        printf("%d\n",*c);
        ++q;
    }
    printf("------\n");
    for(j=0;j<5;j++)
    {
        printf("%d\n",*p);
        ++p;
    }
    return 0;
}
