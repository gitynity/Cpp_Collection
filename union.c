#include<stdio.h>

union {
    int a;
    float b;
} A;

struct point{
    int x;
    int y;
};


union {
    struct point p1;
    } X , Y;

int main(int argc, char const *argv[])
{
    printf("%d\n%f",A.a,A.b);
    printf("\n%d",X.p1.x);
    
    A.a=4;
    A.b=6;  //value of A.a is overriden and forgotten since now union is only acting as it only has float variable
    printf("%d",A.a);// Prints garbage
    
    return 0;
}