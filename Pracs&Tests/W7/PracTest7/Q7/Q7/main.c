#include <stdio.h>

/*The program below should read in three integer values, determine the middle of the three values, and display the middle value using a pointer.

Write the missing code to determine the middle value and let pointer midPtr point to this value.

ONLY write the MISSING LINES of code.*/

int main() {
    int *midPtr;
    int num1, num2, num3;

    scanf("%d", &num1); // input handled by CodeRunner
    scanf("%d", &num2); // input handled by CodeRunner
    scanf("%d", &num3); // input handled by CodeRunner

    // MISSING CODE - YOUR CODE WILL BE INSERTED HERE

    if ((num1>num2)&&(num2>num3)){

        midPtr=&num2;

    }
    if ((num3>num2)&&(num2>num1)){

        midPtr=&num2;

    }
    if ((num2>num3)&&(num3>num1)){

        midPtr=&num3;

    }
    if ((num1>num3)&&(num3>num2)){

        midPtr=&num3;

    }
    if ((num2>num1)&&(num1>num3)){

        midPtr=&num1;

    }
    if ((num3>num1)&&(num1>num2)){

        midPtr=&num1;

    }


    printf("The middle value is %d.", *midPtr);

    return 0;
}
