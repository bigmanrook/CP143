#include <stdio.h>
#include <stdlib.h>


float variance(int a, int b, int c, int d); // function prototype

int main()
{
    int w, x, y, z;
    scanf("%d", &w); // input handled by CodeRunner
    scanf("%d", &x); // input handled by CodeRunner
    scanf("%d", &y); // input handled by CodeRunner
    scanf("%d", &z); // input handled by CodeRunner

    printf("The variance of %d, %d, %d, and %d", w, x, y, z);
    printf(" is %.2f", variance(w,x,y,z));

    return 0;
}

float variance(int a, int b, int c, int d){
    float avg, sum;
    int i;

        avg = (float) (a+b+c+d)/4;
        sum = (float) (a-avg)*(a-avg) + (b-avg)*(b-avg) + (c-avg)*(c-avg) + (d-avg)*(d-avg);
        return (sum/4);


    }


