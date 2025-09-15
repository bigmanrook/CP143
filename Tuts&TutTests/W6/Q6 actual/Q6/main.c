#include <stdio.h>
#include <stdlib.h>

int main() {
    int seed, minValue, minIndex;
    int array[20] = {0};

    scanf("%d", &seed); // input handled by CodeRunner
    srand(seed);

    // Fill array with random values from 1 to 10:
    for (int i = 0; i < 20; i++) {
        array[i] = rand() % 10 + 1;
    }

    // MISSING CODE - YOUR CODE WILL BE INSERTED HERE
    int i=0;

        for (i=0;i<20;i++){

            if (array[i] < minValue){

                minValue=array[i];
                minIndex=i;

            }
        }

    printf("The minimum element is %d at index %d\n", minValue, minIndex);

    return 0;
}
