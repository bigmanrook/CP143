#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 4

void printArrays(int *arrPtrs[], int arrLengths[], int size);

int main() {
    unsigned seed;
    int arrayLengths[SIZE];
    int *arrayPtrs[SIZE];

    scanf("%u", &seed); // input handled by CodeRunner
    srand(seed);

    for (int i = 0; i < SIZE; i++) {
        arrayLengths[i] = rand() % 5 + 1;
        arrayPtrs[i] = malloc(arrayLengths[i] * sizeof(int));
    }

    // MISSING CODE - YOUR CODE WILL BE INSERTED HERE

    /*
    The program below defines SIZE number of integer arrays, where each of the arrays has a size that is randomly chosen from 1 to 5.
    The array arrayPtrs contains pointers to each of the arrays, and the array arrayLengths stores the sizes of the arrays.

    The given code dynamically allocates memory for the arrays, displays the values stored in the arrays by calling function printArrays
    (function is defined but not shown), and releases the memory at the end of the main function. You should add code to step through the
    arrays and assign consecutive integer values to the elements, starting from 1. For example, if the first array has three elements,
    it should contain the values 1, 2 and 3; if the second array has two elements, it should contain the values 4 and 5; et cetera.

    Add the code to complete this program. ONLY write the MISSING LINES of code.

    (Note that the sequence of random numbers might differ between CodeRunner and Code::Blocks, even when using the same seed.)
    */
    int count=0;

    for (int i = 0; i < SIZE; i++) {
        for (int j=0;j<arrayLengths[i];j++){
            count++;
            arrayPtrs[i][j] = count;

        }
    }



    printArrays(arrayPtrs, arrayLengths, SIZE);

    for (int i = 0; i < SIZE; i++) {
        free(arrayPtrs[i]);
    }

    return 0;
}

// FUNCTION printArrays IS DEFINED BUT ITS DEFINITION IS NOT SHOWN

void printArrays(int *arrPtrs[], int arrLengths[], int size){

    for (int i = 0; i < SIZE; i++) {
        for (int j=0;j<arrLengths[i];j++){
            printf("%d ", arrPtrs[i][j]);

        }
        printf("\n");
    }

}
