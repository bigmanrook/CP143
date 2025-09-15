#ifndef ASSIGNMENT7C_H_INCLUDED
#define ASSIGNMENT7C_H_INCLUDED
#define SIZE = 10

int arrayA[][SIZE], arrayB[][SIZE], arrayC[][SIZE]; //No need to make it dynamic for now
void fillRandom(int matrix[][SIZE], int size);
void printMatrix(const int matrix[][SIZE], int SIZE);
void multiply(const int A[][SIZE], const int B[][SIZE],int C[][SIZE], int size);


#endif // ASSIGNMENT7C_H_INCLUDED
