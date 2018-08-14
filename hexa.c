#include<stdio.h>
int main(int argc, char const *argv[])
{
    char x = 0x80; // char x is assigned 128
    int y =x;
    printf("%d",y);
    
    return 0;
}

/*
char is only 1 byte i.e max number assigned to a char is 127 (from -128 to 127 ,total = 255)
since 128 is assigned it goes round to minimum on negative side i.e -128.
