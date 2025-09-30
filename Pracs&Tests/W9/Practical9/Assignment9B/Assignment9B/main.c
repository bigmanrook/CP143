#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, c, **m, *spc, mark;


    printf("Enter in the amount of classes\n");

    scanf("%d", &c);
    m=(int**) malloc(c*sizeof(int*));
    spc=(int*) malloc(c*sizeof(int*));


    for (int i=0; i<c;i++){

    printf("Enter in the amount of students in class: %d\n", i+1);
    scanf("%d", &s);
    spc[i]=s;
    m[i]=(int*) malloc(s*sizeof(int*));
        for (int j=0; j<s; j++){

         printf("Enter in the mark for student: %d\n", j+1);
         scanf("%d", &m[i][j]);


        }

    }


    for (int i=0;i<c;i++){

    float sum=0, avg=0;
        for (int j=0; j<spc[i]; j++){

         sum+=m[i][j];


        }
        avg=sum/spc[i];
        printf("Average in class %d is: %f\n", i+1,avg);

    }

    float avg=0, t=0;

    for (int i=0;i<c;i++){


        for (int j=0; j<spc[i]; j++){

         avg+=m[i][j];


        }
        t += spc[i];

        if (i==c-1){

            printf("Average in grade is: %f\n", avg/t);
            printf("Out of: %f learners\n", t);

        }

    }









    free(spc);
    free(m);
    return 0;

}
