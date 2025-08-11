#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
float random;
int MonteCarlo();

int Random(){

    srand((unsigned)time(NULL));

    // Generate a random float between 0 and 1
    float r = (float)rand() / (float)RAND_MAX;

    printf("Random float: %f\n", r);

    return random;

}

int MonteCarlo(){

    int TotalPoints=0,total, CirclePoints=0;
    float x, y. distance;

    for (i=0; i<=input; i++){

    x = Random();
    y = Random();
    if ((x*x+y*y)<=1){

        CirclePoints++;
        TotalPoints++

    }
    else
        TotalPoints++;


    }

    //Algorithm: Generate points, ensure points are within range, count how many points there are, divide by area of square (can skip, as area of square is 1), multiply by 4


return TotalPoints;

}


int main()
{
    float input, i, pi;
    int points;
    printf("Please enter in an iteration number");
    scanf("%d", &input);
    points = MonteCarlo(input);
    pi = points*4



    return 0;
}
