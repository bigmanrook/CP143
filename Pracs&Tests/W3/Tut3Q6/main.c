#include <stdio.h>

int main()
{
    int size, i, j;

    scanf("%d", &size); // Input handled by CodeRunner

    for (i = 1; i <= size; i++) {

        // MISSING CODE - YOUR CODE WILL BE INSERTED HERE
        for (j=1;j<=i;j++){

            if (i%2!=0)
            printf("*");
            if (i%2==0)
            printf("#");

        }
        printf("\n");

    }

    return 0;
}
