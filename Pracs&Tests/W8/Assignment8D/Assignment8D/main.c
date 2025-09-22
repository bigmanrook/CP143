#include <stdio.h>
#include <stdlib.h>

int main()
{
    int students, *sPtr;
    printf("How many students are in the class?\n");
    scanf("%d", &students); //read in number of students
    sPtr = (int*)malloc(students*sizeof(int)); //allocate memory for array to store marks
    printf("Enter in the students marks\n");
    for (int i=0;i<students;i++){

       scanf("%d", sPtr+i); //read in students marks

    }

    for (int j=0;j<students;j++){

        for (int i=0;i<students - 1- j;i++){
        int temp;
           if (*(sPtr + i) > *(sPtr + i + 1)) {
                    int temp = *(sPtr + i);
                    *(sPtr + i) = *(sPtr + i + 1);
                    *(sPtr + i + 1) = temp;
                }

    }

    }

    for (int i=0;i<students;i++){

    printf("%d ", *(sPtr+i)); //print out students marks

       }

    free(sPtr);

    return 0;
}

//min, max, median and avg functions required
