#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char* s = (char*)malloc((sizeof"Hello World\n"));
    strcpy(s,"Hello World\n");
    printf("%s",s);
    return 0;
}
