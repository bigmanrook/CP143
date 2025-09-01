/* Filename: Assignment2A.c
* Date: 2025/07/29
* Name: Wells J.
* Student number: 28890612
* ------------------------------------------------------
* By submitting this file electronically, I declare that
* it is my own original work, and that I have not copied
* any part of it from another source, unless instructed
* to do so in the assignment.
* ------------------------------------------------------
* Calculation Programming exercise
* ------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, ans;



    do {



        printf("Please enter the first integer - if you would like to exit, enter -1\n");
        scanf("%d", &num1);

        if (num1=-1) {
            break;
        }

        printf("Please enter the second integer: \n");
        scanf("%d", &num2);

        if (num2>0) {


        ans = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, ans);

        ans = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, ans);

        ans = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, ans);

        ans = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, ans);

        ans = num1 % num2;
        printf("%d %% %d = %d\n", num1, num2, ans);

        ans = (num1 + num2)/2;
        printf("The average of %d and %d = %d\n", num1, num2, ans);

        }
    else {

        printf("Logic error: Please enter a number bigger than 0"); //This is one solution

    }

    } while (num1 != -1);


    return 0;
}
