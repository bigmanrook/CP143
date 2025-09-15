#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, x;
    x = 5;
    ptr = &x;
    *ptr = 10;


    printf("x = %d", *ptr);

    return 0;
}

//Use pointers to work with arrays
//Use pointers to work with structures
