#include <stdio.h>
void swap(int *value1Ptr, int *value2Ptr);
void sortValues(int *value1Ptr, int *value2Ptr, int *value3Ptr);

int main() {
    int value1, value2, value3;

    scanf("%d", &value1); // input handled by CodeRunner
    scanf("%d", &value2); // input handled by CodeRunner
    scanf("%d", &value3); // input handled by CodeRunner

    sortValues(&value1, &value2, &value3);

    printf("Sorted values: %d, %d, %d\n", value1, value2, value3);

    return 0;
}

// MISSING CODE - YOUR CODE WILL BE INSERTED HERE
void sortValues(int *value1Ptr, int *value2Ptr, int *value3Ptr){

    int array[3]={*value1Ptr,*value2Ptr,*value3Ptr};

        if (*value1Ptr>*value2Ptr){

            swap(value1Ptr,value2Ptr);

        }
        if (*value2Ptr>*value3Ptr){

            swap(value2Ptr,value3Ptr);

        }
        if (*value1Ptr>*value2Ptr){

            swap(value1Ptr,value2Ptr);

        }


}

void swap(int *value1Ptr, int *value2Ptr){

    int temp;
    temp = *value1Ptr;
    *value1Ptr=*value2Ptr;
    *value2Ptr=temp;

}
