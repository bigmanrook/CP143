#include <stdio.h>
#include <stdlib.h>


/*This question refers to the greatest common divisor (GCD) and least common multiple (LCM) as defined in Questions C and D of Practical 5.

The LCM of three integers can be calculated by
LCM(x,y,z)=LCM(LCM(x,y),z).

In the program below, the GCD of two integers is calculated by function GCD. You should write the following two function definitions:

Function LCM, which calculates and returns the LCM of its two arguments
Function LCM3, which calculates and returns the LCM of its three arguments
ONLY write the MISSING LINES of code.*/

int GCD(int a, int b);
int LCM(int a, int b);
int LCM3(int a, int b, int c);

int main() {
    int num1, num2, num3;

    scanf("%d", &num1); // Input handled by CodeRunner
    scanf("%d", &num2); // Input handled by CodeRunner
    scanf("%d", &num3); // Input handled by CodeRunner

    printf("LCM(%d,%d) = %d\n", num1, num2, LCM(num1,num2));
    printf("LCM(%d,%d,%d) = %d\n", num1, num2, num3, LCM3(num1,num2,num3));

    return 0;
}

int GCD(int a, int b) {
    int gcd;
    if (b == 0) {
        gcd = abs(a);
    }
    else {
        gcd = GCD(b, a%b);
    }
    return gcd;
}

// MISSING CODE - YOUR CODE WILL BE INSERTED HERE
int LCM(int a, int b){



}

int LCM3(int a, int b, int c){



}
