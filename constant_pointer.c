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

If data_type has a prefix 'const' Then data_type is of constant.
Example: const int *ptr;
Also..
"int const * ptr" is the same thing as "const int * ptr" which means it is a pointer to a constant int


If pointer_variable_name has prefix 'const'. Then pointer is of type constant.
Example: int * const ptr3;
*/