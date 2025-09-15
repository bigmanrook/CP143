#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i, j;
    scanf("%d", &size); // Input handled by CodeRunner

    for (i = 1; i <= size; i++) {

        for (j = size; j >= i; j--) {


        if (size%2==0) {

            if (j%2==0&&i%2!=0)
                printf("*");
            if (j%2!=0&&i%2==0)
                printf("*");
            if (j%2==0&&i%2==0)
                printf("#");
            if (j%2!=0&&i%2!=0)
                printf("#");

        }

        if (size%2!=0) {

            if (j%2==0&&i%2==0)
                printf("*");
            if (j%2==0&&i%2!=0)
                printf("#");
            if (j%2!=0&&i%2==0)
                printf("#");
            if (j%2!=0&&i%2!=0)
                printf("*");

        }





        }
        printf("\n");


    }

    return 0;
}
