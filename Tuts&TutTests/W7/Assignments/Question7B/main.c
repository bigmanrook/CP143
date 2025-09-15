#include <stdio.h>
#include <stdlib.h>

const SIZE=10;
int arrayA[][SIZE], arrayB[][SIZE], arrayC[][SIZE]; //No need to make it dynamic for now
void fillRandom(int matrix[][SIZE], int size);
void printMatrix(const int matrix[][SIZE], int SIZE);
void multiply(const int A[][SIZE], const int B[][SIZE],int C[][SIZE], int size);



int main()
{
    printf("Hello world!\n");
    return 0;
}

void printMatrix(const int matrix[][SIZE], int SIZE){

//matrix multiplication
// Sum of A[i, j] and B[j , i] for amount of i, and then go through it linearly inputting value into another array

}

void fillRandom(int matrix[][SIZE], int size){

    int i, j;

    for (i=0,i<size,i++){

        for (j=0, j<size, j++){

            M[i][j] = rand()19%-9;

        }

    }

}

void multiply(const int A[][SIZE], const int B[][SIZE],int C[][SIZE], int size){
int i, j;

    for (i=0,i<size,i++){

        for (j=0, j<size, j++){

            C[i][j] = A[i][j]*B[j][i];

        }

    }


}
