#include<stdio.h>
int main(int argc, char const *argv[])
{
    const int i=10;
    const int * ptr = &i;  //ptr is a pointer to constant integer
    ptr++; //no error


    int j =5;
    int const* ptr1 = &j;   //ptr1 is also a  pointer to constant integer
    ptr1++;  //No error

    
    int * const ptr2 = &i;  //ptr2 is a constant pointer to integer
    ptr2++; //Error. Constant pointer cannot be changed

    
    return 0;
}

/*
Pointer Declaration

Data_type * pointer_variable_name;

Read right to left for pointers and references
*/
