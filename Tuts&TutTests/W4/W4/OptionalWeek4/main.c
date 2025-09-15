#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int CirclePoints(int input);
int SquarePoints(int input), TotalPoints;

int CirclePoints(int input){

    int total, c=0;
    float x, y, distance, i;

    for (i=0; i<=input; i++){

    x = rand()%1;
    y = rand()%1;
    if ((x*x+y*y)<=1){

        c++;

    }

    //Algorithm: Generate points, ensure points are within range, count how many points there are, divide by area of square (can skip, as area of square is 1), multiply by 4


return c;

}
}

int SquarePoints(int input){

    int total, S=0, i;
    float x, y, distance;

    for (i=0; i<=input; i++){

    x = rand()%1;
    y = rand()%1;
    if (x*y<=1){

        S++;

    }

    //Algorithm: Generate points, ensure points are within range, count how many points there are, divide by area of square (can skip, as area of square is 1), multiply by 4


return S;

}
}


int main()
{
    float input, i, pi, p, tp;
    printf("Please enter in an iteration number:\n");
    scanf("%f", &input);
    p = CirclePoints(input);
    tp = SquarePoints(input-p) + p;
    printf("S is: %d, C is %d", pi);
    pi = (float) tp/p;
    printf("Pi is equivalent to: %f\n", pi);



    return 0;
}
