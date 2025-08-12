#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    float x; // input value for which cos(x) should be calculated
    float term; // variable to store one term
    float sum = 1; // sum of n terms; initialised with first term
    int n = 0; // index of current term
    int fact = 1; // factorial of current term

    scanf("%f", &x); // input handled by CodeRunner



    do {


        int i;
        n++;
        fact =1;
        for (i=1;i<=2*n;i++){

        fact = fact*(i);

        }
        //printf("%d\n", fact);

        term = ( (pow(-1, n)*pow(x, 2*n) / (fact) )); // factorial number is incorrect

        sum = sum + term;

    } while  (fabs(term) >= 0.001) ;

    printf("Using %d terms: cos(%.1f) = %.3f", n + 1, x, sum);

    return 0;
}
