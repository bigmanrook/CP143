#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int matrixaddition(int *ptr);
int matrixsubtraction(int *ptr);
int matrixmultiplication(int *ptr);
int matrixdivision(int *ptr);

int main()
{
    int *ptr, x, *dynamicarray, size;
    x = 5;
    ptr = &x; //Assigning the pointer with the memory address of x
    *ptr = 10;
    printf("Enter in an array size:\n", size);
    scanf("%d", &size);
    dynamicarray = (int*)malloc(size*sizeof(int));
    //dynamic array = (int*)calloc(size, sizeof(int)) will allocate 0 to all these memory addresses

    //check if array was initialized
    if (dynamicarray==NULL){
        printf("array not allocated to memory\n");
    }
    else {
        printf("array allocated to memory\n");
    }

    //how to allocate to dynamic array?
    for (int i=0; i<size;i++){

    for(int j=0;j<size;j++){

    *(dynamicarray+(i*sizeof(int)))=rand()%2; //Where (i*sizeof(int)) is the consecutive memory address - you have basically made an array inside of memory, but using a pointer

    }
    }

    for (int i=0; i<size;i++){

        printf("%d ",*(dynamicarray+(i*sizeof(int)))); //Where (i*sizeof(int)) moves you to the consecutive memory address, and *dynamicarray initialises you at the first memory address of your array

    }
    /*printf("\n");
    printf("x = %d\n", *ptr);
    printf("x address = %p\n", ptr);
    printf("x address is also = %p\n", &x);*/
    free(dynamicarray);

    return 0;
}

//Use pointers to work with arrays
//Use pointers to work with structures
