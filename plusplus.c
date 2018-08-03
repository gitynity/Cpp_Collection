#include <stdio.h>

int main(int argc, char const *argv[])
{
    int y = 2;
    printf("%d",++y*++y*++y);
    //this prints 80
    return 0;
}
