#include <stdio.h>
#include <stdlib.h>

int matrixaddition(int *ptr);
int matrixsubtraction(int *ptr);
int matrixmultiplication(int *ptr);
int matrixdivision(int *ptr);
int ralloc(int *ptr, int r, int c);
void displaymatrix( int *ptr, int r, int c);

int main()
{
    int *ptr, x, *dynamicarray, size, *dynamic2darray, r, c;
    x = 5;
    ptr = &x; //Assigning the pointer with the memory address of x
    *ptr = 10;
    printf("Enter in an array size:\n", size);
    scanf("%d", &size);
    printf("Enter in a matrix row size:\n", r);
    scanf("%d", &r);
    printf("Enter in a matrix row size:\n", c);
    scanf("%d", &c);
    dynamicarray = (int*)malloc(size*sizeof(int));
    dynamic2darray = (int*)malloc(r*c*sizeof(int));


    //dynamic array = (int*)calloc(size, sizeof(int)) will allocate 0 to all these memory addresses

    //check if array was initialized
    if ((dynamicarray==NULL)&&(dynamic2darray==NULL)){
        printf("✘arrays not allocated to memory\n");
    }
    else {
    }
        printf("✔arrays allocated to memory\n"); //0252
    //how to allocate to dynamic 2d array?
    /*printf("\n");
    printf("x = %d\n", *ptr);
    printf("x address = %p\n", ptr);
    printf("x address is also = %p\n", &x);*/
    ralloc(dynamicarray, 1, size);
    ralloc(dynamic2darray, r, c);

    displaymatrix(dynamicarray, 1, size);
    displaymatrix(dynamic2darray, r, c);

    free(dynamicarray);
    free(dynamic2darray);

    return 0;
}

int ralloc(int *ptr, int r, int c){

    if (r==1){

        for(int j=0;j<c*r;j++){

        *(ptr+(j*sizeof(int)))=rand()%2; //Where (i*sizeof(int)) is the consecutive memory address - you have basically made an array inside of memory, but using a pointer

        }

    }
    else{

        for (int i=1; i<r+1;i++){

        for(int j=1;j<c+1;j++){

        *(ptr+(j*i*sizeof(int)))=rand()%2; //Where (i*sizeof(int)) is the consecutive memory address - you have basically made an array inside of memory, but using a pointer

        }
    }

    }

    return *ptr;

}

void displaymatrix( int *ptr, int r, int c){

    if (r==1){

    printf("1D array:\n");
    for (int i=0; i<c;i++){

    printf("%d ",*(ptr+(i*sizeof(int)))); //Where (i*sizeof(int)) moves you to the consecutive memory address, and *dynamicarray initialises you at the first memory address of your array

    }
    printf("\n");
    }
    else {

    printf("2D array:\n");
    for (int i=1; i<r+1;i++){

        for(int j=1;j<c+1;j++){

        printf("%d ",*(ptr+(j*i*sizeof(int))));

        }
        printf("\n");
    }

    }


}

//Use pointers to work with arrays
//Use pointers to work with structures
