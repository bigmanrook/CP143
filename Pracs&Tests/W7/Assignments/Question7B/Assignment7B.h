#ifndef ASSIGNMENT7C_H_INCLUDED
#define ASSIGNMENT7C_H_INCLUDED
#define SIZE 3

// Global arrays - properly declared with complete dimensions
int arrayA[SIZE][SIZE], arrayB[SIZE][SIZE], arrayC[SIZE][SIZE];

// Function prototypes
void fillRandom(int matrix[][SIZE], int size);
void printMatrix(const int matrix[][SIZE], int size);
void multiply(const int A[][SIZE], const int B[][SIZE], int C[][SIZE], int size);


#endif // ASSIGNMENT7C_H_INCLUDED
