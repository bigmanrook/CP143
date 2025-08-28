#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float bankaccount = 500.55, expense = 300.5; /*Testing out variables and data types in C*/
    int date = 2, month = 8, year = 2006;
    const char myName[] = "Jude";
    char myCode[5];
    printf("Hello world!\n");
    printf("My name is: %s\n", myName);
    printf("my birthday is: %d of %d in the year %d\n", date, month, year);
    if (bankaccount>expense) {
        printf("Well done!\n");
    } else {
        printf("Cut down on expenditure!\n")
;    } /*Testing out if and else statements - do not have an if else statement, but similar syntax to if statement*/
    int time = 20;
    (time < 18) ? printf("Good day.\n") : printf("Good evening.\n"); /*Testing out ternary operator*/
    switch (month) {
        case 1:
            printf("Jan");
            break;
        case 2:
            printf("Feb");
            break;
        case 3:
            printf("Mar");
            break;
        case 4:
            printf("Apr");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("Jun");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("Aug");
            break;
        case 9:
            printf("Sep");
            break;
        case 10:
            printf("Oct");
            break;
        case 11:
            printf("Nov");
            break;
        case 12:
            printf("Dec");
            break;
        default:
            printf("Tf month you born in cuz?");
            break;
    } /*Testing out switch and case statements*/

    //test out repeat until loop
    int result;
    char stringcompare[] = "2886";
    do {
        printf("\nWhat is the code?: ");
        scanf("%s", &myCode);
        result = strcmp(stringcompare, myCode);
    }
    while (result != 0);



    //test out while loop

    //test nested if statements

    /* Dealing with pointers - referencing, dereferencing, etc */

    return 0;
}
