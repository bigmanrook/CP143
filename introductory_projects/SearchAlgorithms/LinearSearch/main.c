#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxsearch(void);
int minsearch(void);
int linearsort(void);
void binarysearch(int search);
int FillArrayRandom(int range);
int data[1000], size, index;


int main()
{
    int j=0, range;
    int val, search, k;
    printf("Enter in your array size\n");
    scanf("%d", &size);
    printf("Enter in your array range\n");
    scanf("%d", &range);
    FillArrayRandom(range);
    //printf("%d\n", size);
    //printf("Enter in your array values\n");

    /*while (j<size){

    scanf("%d", &val);
    data[j] = val;
    //printf("%d", j);
    j++;

    } */

    /*
        for (j=0;j<size;j++){

            scanf("%d", &val);
            data[j] = val;
            printf("%d", j);

    }
    */

    printf("Max number in array is: %d\n", maxsearch());
    printf("Min number in array is: %d\n", minsearch());
    linearsort();
    scanf("%d", &search);
    binarysearch(search);

        //index from counting to whole numbers

    }


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

void binarysearch(int search){

    int lower, upper, mid;
    mid = size/2;
    upper = size -1;
    lower = 0;

    while (lower<=upper){
        if (data[mid]==search)
            printf("Search term found at: %d\n", mid);
        else if (data[mid]<search){
            lower = mid + 1; //decreasing the search area
            mid = (upper+lower)/2;//Search upper
        }

        else if (data[mid]>search){
            upper = mid - 1; //decreasing search area
            mid = (upper+lower)/2;//Search lower
        }


    }



    if ((data[mid+1]-search)>(search-data[mid-1])){
    printf("Search term could not be found, however the closest integer is %d at location %d\n", data[mid-1], mid);

    }
    else {
    printf("Search term could not be found, however the closest integer is %d at location %d\n", data[mid+1], mid+2);
    }

}

int FillArrayRandom(int range){
int h;
srand(time(NULL));
    for (h=0;h<size;h++){

        data[h] = rand()%range+1;
        //printf("%d\n", data[h]);

    }

}
