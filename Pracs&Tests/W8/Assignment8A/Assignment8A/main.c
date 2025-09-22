#include <stdio.h>
#include <stdlib.h>
#include <math.h>
enum TriangleType {RIGHT, ACUTE, OBTUSE};
enum TriangleType triangleProperties(float a, float b, float c, float *xPtr, float *yPtr, float *zPtr);

int main()
{
    float a, b, c, x, y ,z;
    printf("Enter in 3 values for side lengths\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

        switch (triangleProperties(a,b,c, &x, &y, &z)){

    case 0:
        printf("Right Angled Triangle\n");
        break;
    case 1:
        printf("Triangle is acute\n");
        break;
    case 2:
        printf("Triangle is obtuse\n");
        break;
    default:
        printf("Triangle properties could not be determined");
        }


    printf("Angle 1: %f\n", x*180/M_PI);
    printf("Angle 2: %f\n", y*180/M_PI);
    printf("Angle 3: %f\n", z*180/M_PI);

    return 0;
}



enum TriangleType triangleProperties(float a, float b, float c, float *xPtr, float *yPtr, float *zPtr){


    *xPtr=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
    *yPtr=acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
    *zPtr=acos((pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a));

    if ((*xPtr>*yPtr)&&(*xPtr>*zPtr)){

        if (*xPtr<(M_PI/2)){
            return 1;
        }
        else if (*xPtr==(M_PI/2)){
            return 0;
        }
        else if(*xPtr>(M_PI/2)){
            return 2;
        }

    }
    if ((*zPtr>*yPtr)&&(*xPtr<*zPtr)){

        if (*zPtr<(M_PI/2)){
            return 1;
        }
        else if (*zPtr==(M_PI/2)){
            return 0;
        }
        else if(*zPtr>(M_PI/2)){
            return 2;
        }

    }
    if ((*xPtr<*yPtr)&&(*yPtr>*zPtr)){

        if (*yPtr<(M_PI/2)){
            return 1;
        }
        else if (*yPtr==(M_PI/2)){
            return 0;
        }
        else if(*yPtr>(M_PI/2)){
            return 2;
        }

    }

    return 4;

};
