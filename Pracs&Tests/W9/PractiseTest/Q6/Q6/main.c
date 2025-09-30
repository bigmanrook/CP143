#include <stdio.h>

/*
The program below uses the structure definition Point to represent the coordinates of a 2-D point. The program contains the following function prototype:

void movePoint(Point *pPtr, int xOffset, int yOffset);

This function should move the point that pPtr points to by adding xOffset to its x-coordinate and adding yOffset to its y-coordinate. Write the function definition for function movePoint.

ONLY write the MISSING LINES of code.
*/

typedef struct {
    float x;
    float y;
} Point;

void movePoint(Point *pPtr, int xOffset, int yOffset);

int main() {
    Point point;
    float xOffset, yOffset;

    scanf("%f", &point.x); // input handled by CodeRunner
    scanf("%f", &point.y); // input handled by CodeRunner

    scanf("%f", &xOffset); // input handled by CodeRunner
    scanf("%f", &yOffset); // input handled by CodeRunner

    printf("(%.1f, %.1f) ", point.x, point.y);

    movePoint(&point, xOffset, yOffset);

    printf("+ (%.1f, %.1f) ", xOffset, yOffset);
    printf("= (%.1f, %.1f)", point.x, point.y);

    return 0;
}

// MISSING CODE - YOUR CODE WILL BE INSERTED HERE
void movePoint(Point *pPtr, int xOffset, int yOffset){

    (pPtr->x)+=xOffset;
    (pPtr->y)+=yOffset;

}
