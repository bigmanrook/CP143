#include <stdio.h>
#include <stdlib.h>

const int NO_OF_SHAPES = 4;

typedef struct {
char type[15];
double area;
char colour[10];
} Shape;


int main()
{

    FILE * fShapePtr;
    int wCount;
    Shape shape;
    fShapePtr = fopen("shapes.dat", "w");
    if (fShapePtr==NULL){

        return 1;

    }

    for (int i=0;i<NO_OF_SHAPES;i++){

        printf("Enter in shape type:\n");
        scanf("%s", shape.type);
        printf("Enter in shape area:\n");
        scanf("%s", shape.area);
        printf("Enter in shape colour:\n");
        scanf("%s", shape.colour);
        wCount = fwrite(&shape,sizeof(Shape),1,fShapePtr);
            if (wCount!=1){

                printf("struct not put in file");

            }

    }
    fclose(fShapePtr);

    //printf("Type: %s, Area: %s, Colour: %s", shape.type, shape.area, shape.colour); //Test structure



    return 0;
}
