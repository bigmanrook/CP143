#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*For this question, you should step through an array in the following ways:
Vir hierdie vraag moet jy deur ’n skikking op die volgende maniere stap:
(a) Using the standard array subscript notation and the array name
Deur die standaard skikking-onderskrifnotasie te gebruik
(b) Using array subscript notation, but with a pointer
Deur die skikking-onderskrifnotasie te gebruik, maar met ’n wyser
(c) Using pointer offset notation
Deur wyser-afsetnotasie te gebruik
(d) By passing a pointer to a function and using the pointer increment operator
Deur ’n wyser na ’n funksie te stuur en die wyser-inkrement-operator te gebruik*/

void random(int* arr, int s);

int main()
{
    int *arr, array[1000], s;
    printf("Enter a number between 1 and 1000");
    scanf("%d", &s);

    arr = array;

    random(arr, s);

    for (int i=0;i<s;i++){

        printf("%d ", array[i]);
    } //standard array subscript notation
    printf("\n");



    for (int i=0;i<s;i++){

        printf("%d ", arr[i]);
    } //pointer offset
    printf("\n");

    for (int i=0;i<s;i++){
    printf("%d ", *(arr++));
    } //pointer incrementation
    printf("\n");

    arr = array;

    for (int i=0;i<s;i++){
    printf("%d ", *(arr+(i)));
    } //pointer arithmetic - query how this works
    printf("\n");

    printf("\n");
    return 0;
}

void random(int* arr, int s)
{

    srand(time(NULL));
    for (int i=0;i<s;i++){

        *(arr+i)=rand()%20+1;

    }

    if (arr==NULL){

        printf("Array values not allocated");

    }

    }

