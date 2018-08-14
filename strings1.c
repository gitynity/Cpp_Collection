#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s[] = "Hello World\n";  //size=13
    char word[] = "word";       //size=5
    char line[] = "\n";        //size=2

    /* '\n' is treated as one single character */
    

    printf("%s",s);
    printf("%lu",sizeof(s));

    printf("\n%lu",sizeof(line));
    printf("\n%lu",sizeof(word));

    return 0;
}

//if instead of char s[] we would have used char* s , then sizeof would return 8 becuz then s is a pointer