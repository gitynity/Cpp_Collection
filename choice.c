#include<stdio.h>
int main(int argc, char const *argv[])
{
    int j =6;
    int i;
    i = (5,j++);     
    printf("%d%d",i,j);
    return 0;
}

/*
 The comma operator has left-right associativity. The left operand is always evaluated first,
and the result of evaluation is discarded before the right operand is evaluated.So at last t
he j++ is assigned to i which is 6;
*/