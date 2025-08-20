#include <stdio.h>
#include <math.h>

int main()
{
    float x; // input value for which exp(x) should be calculated
    float term; // variable to store one term
    float sum = 1; // sum of n terms; initialised with first term
    int n = 0; // index of current term
    int fact = 1; // factorial of current term

    scanf("%f", &x); // input handled by CodeRunner

    do {

        // MISSING CODE - YOUR CODE WILL BE INSERTED HERE
        int i=1;
        fact = 1;
        n++;

        for (i=1;i<=n;i++){

        fact = fact*i;


        }

        term = pow(x, n)/fact;
        sum = sum + term;

    } while ( fabs(term) >= 0.001 );

    printf("Using %d terms: exp(%.1f) = %.3f", n + 1, x, sum);

    return 0;
}
