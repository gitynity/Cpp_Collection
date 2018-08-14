#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct type
    {
        int x;            //Cannot initialise x = 3 here in structure definiton. Not allowed.
        char name[9];    //Cannot initialise name[] to "Hello" here in structure definiton. Not allowed.
    };
    struct type o = {3 , "Hello"} , *s;
    s = &o;
    printf("%d\t",s->x);
    printf("%s",s->name);

    return 0;
}

/*

    struct type
        {
            int x;     
            char name[9];
        } *s;               //just declaring a pointer to structure without making any instance.
                           // This does not give error but the pointer to structure is unitialised.
    
    printf("%d\t",s->x);    //This will print unpredictable outputs depending on compiler
    printf("%s",s->name);  //This will print unpredictable outputs depending on compiler
                              
*/