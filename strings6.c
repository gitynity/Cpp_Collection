#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char*p = (char*)malloc(1024);
    if(p)
    {
        strcpy(p,"Hello\n");
        p+=10;
        strcpy(p,"World\n");
        p+=10;
        strcpy(p,"That is all\n");
    free(p);
    }
    return 0;
}