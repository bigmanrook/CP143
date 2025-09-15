#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, sum;
    int *aptr, *bptr;

    aptr = &a;
    bptr = &b;
    printf("Please enter in 2 values\n");
    scanf("%d", &a);
    scanf("%d", &b);
    sum = a + b;
    printf("Result: %d\n", sum);
    printf("Value pointed to by aptr: %d\n", *aptr);
    printf("Value pointed to by bptr: %d\n", *bptr);



    printf("a = %d, b = %d\n", *aptr, *bptr);
    printf("Please enter in 2 values to store in aptr and bptr respectively\n");
    scanf("%d", aptr);
    scanf("%d", bptr);
    sum = *aptr + *bptr;
    printf("a = %d\n", *aptr);
    printf("b = %d\n", *bptr);
    printf("a's address is %p\n", aptr);
    printf("a's address is %p\n", bptr);
    printf("aptr's value is %p\n", aptr);
    printf("bptr's value is %p\n", bptr);

    return 0;
}
