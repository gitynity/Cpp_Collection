#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x =10 , y = 20;
    x =x+y;
    if(x>=30)
    {
        int y = 30;
        x=x+y;
    }
    else{
        int y =40;
        x=x+y;
    }
    printf("%d",x);
    return 0;
}
