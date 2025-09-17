#include "Assignment7C.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

// Global arrays - properly declared with complete dimensions
int arrayA[SIZE][SIZE], arrayB[SIZE][SIZE], arrayC[SIZE][SIZE];

// Function prototypes
void fillRandom(int matrix[][SIZE], int size);
void printMatrix(const int matrix[][SIZE], int size);
void multiply(const int A[][SIZE], const int B[][SIZE], int C[][SIZE], int size);

int main()
{
    // Seed random number generator
    srand(time(NULL));

    // Fill matrices with random values
    fillRandom(arrayA, SIZE);  // Pass array name, not array[SIZE]
    fillRandom(arrayB, SIZE);

    printf("Matrix A:\n");
    printMatrix(arrayA, SIZE);
    printf("\nMatrix B:\n");
    printMatrix(arrayB, SIZE);

    // Multiply matrices
    multiply(arrayA, arrayB, arrayC, SIZE);  // Pass array names directly

    printf("\nMatrix C (A × B):\n");
    printMatrix(arrayC, SIZE);

    printf("Matrix operations completed!\n");
    return 0;
}

void printMatrix(const int matrix[][SIZE], int size) {
    int i, j;
    for (i = 0; i < size; i++) {        // Fixed: use semicolons, not commas
        for (j = 0; j < size; j++) {    // Fixed: use semicolons, not commas
            printf("%4d ", matrix[i][j]);  // Fixed: removed "Matrix =\n" text
        }
        printf("\n");
    }
}

void fillRandom(int matrix[][SIZE], int size) {
    int i, j;
    for (i = 0; i < size; i++) {        // Fixed: use semicolons, not commas
        for (j = 0; j < size; j++) {    // Fixed: use semicolons, not commas
            matrix[i][j] = rand() % 19 - 9;  // Fixed: use 'matrix', not 'M'
        }
    }
}

void multiply(const int A[][SIZE], const int B[][SIZE], int C[][SIZE], int size) {
    int i, j, k;  // Added missing 'k' variable declaration

    for (i = 0; i < size; i++) {        // Fixed: use semicolons, not commas
        for (j = 0; j < size; j++) {    // Fixed: use semicolons, not commas
            C[i][j] = 0;  // Initialize result element
            for (k = 0; k < size; k++) {    // Fixed: proper k loop
                C[i][j] += A[i][k] * B[k][j];  // Fixed: correct matrix multiplication formula
            }
        }
    }
}
