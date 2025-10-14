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
        scanf("%d", shape.area);
        printf("Enter in shape colour:\n");
        scanf("%s", shape.colour);
        wCount = fwrite(&shape,sizeof(Shape),1,fShapePtr);
            if (wCount!=1){

                printf("struct not put in file");

            }

    }


    fclose(fShapePtr);
    Shape shapeNew;
    fShapePtr = fopen("shapes.dat", "r");
while (fread(&shapeNew, sizeof(Shape), 1, fShapePtr) == 1) {
    // Print the current record
    printf("Shape type: %s\n", shapeNew.type);
    printf("Shape area: %d\n", shapeNew.area);
    printf("Shape area: %s\n", shapeNew.colour);
    printf("--------\n");

    // Skip the next record (move file pointer ahead by one Shape)
    fseek(fShapePtr, sizeof(Shape), SEEK_CUR);
}

    //printf("Type: %s, Area: %s, Colour: %s", shape.type, shape.area, shape.colour); //Test structure



    return 0;
}
