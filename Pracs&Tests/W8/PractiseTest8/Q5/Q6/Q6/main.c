#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fillRandom(int array[], int size);
//double variance(int *intPtr, int size);
//double average(int *intPtr, int size);

int main() {
    int size, *intPtr;
    double average, variance;
    unsigned seed;

    scanf("%u", &seed); // input handled by CodeRunner
    srand(seed);

    scanf("%d", &size); // input handled by CodeRunner

    // MISSING CODE - YOUR CODE WILL BE INSERTED HERE



    intPtr=(int*)malloc(size*sizeof(int));
    fillRandom(intPtr, size);

    double sum=0;
    for (int i=0;i<size;i++){
      sum+=*(intPtr+i);
    }


    average = sum / size;


    for (int i=0;i<size;i++){
      variance+=pow((*(intPtr+i)-average), 2);
    }


    variance = variance/size;



    printf("Average: %.1f\n", average);
    printf("Variance: %.1f", variance);

    return 0;
}

void fillRandom(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 101;
    }
}

