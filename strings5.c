#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[] = "Hello World\n";
    printf("Length of String is %d\n", (int)strlen(str));   //8 ; it has to see the contents of the string till null termination , so in run time
    printf("Size of String is %d\n", (int)sizeof(str));     //9 ; tells result during compile time
}

//sizeof() even includes null character as a character while caculating size.
//strlen() does not inlcude null charcter while calculating size.