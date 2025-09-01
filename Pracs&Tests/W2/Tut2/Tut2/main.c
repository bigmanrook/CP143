#include <stdio.h>

int main() {
    int x, n, prod;

    scanf( "%d", &x ); // This input is handled by CodeRunner

    n = 0; // initial value of iteration counter
    prod = 0; // initial square number
    while ( prod < x ) {
        n = n + 1; // iteration counter increases

        prod = n*n;

    }

    printf( "The first square number greater than or equal to %d is %d.", x, prod );

    return 0;
}
