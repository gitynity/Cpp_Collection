#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x =1;
    int y =2;
    switch(x|y)
    {
        case 1:
        case 2:
        case 3:  x=3;
        case 4:  x=4;
        //default: x =6;
        case 5:  x=5;
        
    }
    printf("%d",x);
    return 0;
}