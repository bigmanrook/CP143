#include <stdio.h>
#include <stdlib.h>


int maxsearch(void), index, data[5];
int main()
{
    int j, val, max;

    for (j=0;j<5;j++) {
        printf("Enter value for element at index %d: ", j);
        scanf("%d", &val);
        data[j] = val;
    }
    printf("Index:\t");
    for (j=0;j<5;j++) {
        printf("%d\t", j);
    }
    printf("\nValue:\t");
    for (j=0;j<5;j++) {
        printf("%d\t", data[j]);
    }
    max = maxsearch();
    printf("\nThe maximum element is %d at index %d", max, index);

    return 0;
}

int maxsearch(void){

    int max=0, i;

    for(i=0;i<5;i++){

        if (data[i]>max){
            max = data[i];
            index = i;
        }
    }
return max;

}
