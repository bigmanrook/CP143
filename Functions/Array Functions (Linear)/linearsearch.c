#include <stdio.h>
#include <stdlib.h>

int maxsearch(void);
int minsearch(void);
int linearsort(void);
int binarysearch(int search);
int FillArrayRandom(int range);
int ClosestInteger(int search, lower, upper);

int data[1000], size;


int maxsearch(void){

    int max=0, i;

    for(i=0;i<size;i++){

        if (data[i]>max){
            max = data[i];
        }

    }
return max;

}

int minsearch(void) {

    int min=0, i;
    min = data[0];
    for(i=0;i<size;i++){
        if (data[i]<min){
            min = data[i];
        }

    }
return min;

}

int linearsort(void){

    int temp, i, j=0;

    while (j<size){
    i=0;
        while (i<size) {
            if (data[j]<data[i]){
                temp = data[i];
                data[i]=data[j];
                data[j]=temp;
            }
            i++;
        }
    j++;
    }


    for(i=0;i<size;i++){
    printf("%d\n", data[i]);
    }

}

int binarysearch(int search){

    int lower, upper, mid;
    mid = size/2;
    upper = size -1;
    lower = 0;

    while (lower<=upper){
        if (data[mid]==search)
            return mid;
        else if (data[mid]<search){
            lower = mid + 1; //decreasing the search area
            mid = (upper+lower)/2;//Search upper
        }

        else if (data[mid]>search){
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
            data[h] = rand()%range+1;
            //printf("%d\n", data[h]);
        }

}

int ClosestInteger(int search, mid){

    if (data[mid]-data[mid-1]>data[mid+1]-data[mid]){

        return mid+1;

    }
    else if {

        return mid-1;

    }

}
