#include <stdio.h>
#include <stdlib.h>
#include "myarray.h"


int maxsearch(int array[]);
int minsearch(int array[]);
int linearsort(int array[]);
int binarysearch(int array[], int search);
int FillArrayRandom(int array[], int range);
int ClosestInteger(int array[], search, lower, upper);




int maxsearch(int array[]){

    int max=0, i;

    for(i=0;i<size;i++){

        if (array[i]>max){
            max = array[i];
        }

    }
return max;

}

int minsearch(int array[]){

    int min=0, i;
    min = array[0];
    for(i=0;i<size;i++){
        if (array[i]<min){
            min = array[i];
        }

    }
return min;

}

int linearsort(int array[]){

    int temp, i, j=0;

    while (j<size){
    i=0;
        while (i<size) {
            if (array[j]<array[i]){
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
            i++;
        }
    j++;
    }


    for(i=0;i<size;i++){
    printf("%d\n", array[i]);
    }

}

int binarysearch(int array[], int search){

    int lower, upper, mid;
    mid = size/2;
    upper = size -1;
    lower = 0;

    while (lower<=upper){
        if (array[mid]==search)
            return mid;
        else if (array[mid]<search){
            lower = mid + 1; //decreasing the search area
            mid = (upper+lower)/2;//Search upper
        }

        else if (array[mid]>search){
            upper = mid - 1; //decreasing search area
            mid = (upper+lower)/2;//Search lower
        }

    }
    ClosestInteger(search, mid);
    return -1;

}

int FillArrayRandom(int range){

    int h;
    srand(time(NULL));
        for (h=0;h<size;h++){
            array[h] = rand()%range+1;
            //printf("%d\n", data[h]);
        }

}

int ClosestInteger(int search, mid){

    if (array[mid]-array[mid-1]>array[mid+1]-array[mid]){

        return mid+1;

    }
    else if {

        return mid-1;

    }

}
