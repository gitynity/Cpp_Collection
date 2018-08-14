#include<stdio.h>

void function(int *ip)
{
    static int myvalue = 100;
    ip = &myvalue;
}

int main(int argc, char const *argv[])
{
    int *mypointer = NULL;
    function(mypointer);    //this is acrually call by value. This pointer copies its contents onto ip. 
    printf("%p",mypointer);
    return 0;
}
//when the function is popped from stack everything in its activation record gets popped and mypointer remains unchanged
//However if we had passed the pointer by refernce and the function was accepting reference to pointer
//then situation would have been different