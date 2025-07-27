#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 1, answer=0, remainder;;
    int counter = 0, temp=0, longest=0, comparison=0;
    int iter, i=0;

    printf("Please enter how many times the algorithm should iterate:\n");
    scanf("%d", &iter);



    do {
        answer = input;



        counter=0;


        do {
            /* printf("Please enter a number to prove the collatz conjecture!\n");
            scanf("%d", &input); */ //for manual value input


            remainder = answer % 2;
            if (remainder > 0) {
                answer = 3*answer+1;
            }
            else {
                answer = answer/2;
            }
            counter = counter+1;
            } while (answer != 1);
            comparison = longest;
            temp = counter;

            if (comparison > temp) {
                longest = comparison;
            }
            else {
                longest = temp;
            }

            printf("Prev iter: %d and Present iter: %d and longest step: %d\n", comparison, temp, longest);



            printf("Iteration %d complete: input = %d, steps: %d\n",i+1, input, counter);
            input++;
            i++;


    }
    while (i<iter);

    printf("longest iteration took: %d steps\n", longest);


    return 0;
    }
