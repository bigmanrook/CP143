#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 3


/*
The Frobenius norm of a matrix is the square root of the sum of the square of all its elements. For example, the Frobenius norm of the following 2-by-2 matrix is given by:

∥∥∥[1324]∥∥∥F=12+22+32+42−−−−−−−−−−−−−√=5.48.

The program below is similar to Question B of Practical 7: It also fills two square matrices with random integer values, but it instead of displaying the product of the two matrices, it should display the Frobenius norm of the product.

Function fillRandom has already been written according to the specifications of Question B of Practical 7.

You should write the definition for function frobeniusNormOfProduct. Similar to function multiply in Question B of Practical 7, it takes matrices A and B as well as their dimension as arguments. However, it should return the Frobenius norm of the product of A and B instead of only the product of A and B.

ONLY write the MISSING LINES of code.

(Note that the sequence of random numbers might differ between CodeRunner and Code::Blocks, even when using the same seed.)
*/


void fillRandom(int matrix[][SIZE], int size);
double frobeniusNormOfProduct(const int A[][SIZE], const int B[][SIZE], int size);

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE];
    unsigned seed;

    scanf("%u", &seed); // input handled by CodeRunner
    srand(seed);

    fillRandom(A, SIZE);
    fillRandom(B, SIZE);
    printf("The Frobenius norm of AB is %.2lf.", frobeniusNormOfProduct(A, B, SIZE));

    return 0;
}

void fillRandom(int matrix[][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 19 - 9;
        }
    }
}

// MISSING CODE - YOUR CODE WILL BE INSERTED HERE
double frobeniusNormOfProduct(const int A[][SIZE], const int B[][SIZE], int size){

    for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                    int C[i][j];
                for (int k = 0; k < size; k++) {

                }
                C[i][j] += A[i][j]*B[j][i];
            }
        }

}
