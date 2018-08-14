#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char* p = (char*)malloc(sizeof("Hello World\n"));
    if(p)
    {
        strcpy(p,"Hello World");
        printf("%s",p);
    }

    p = (char*)malloc(sizeof("Good MOrning\n"));
    if(p)
    {
        strcpy(p,"Good Morning");
        printf("%s",p);
    }

    if(p)
    free(p);
    return 0;
}
