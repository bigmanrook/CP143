#include "libs.h"



//function declarations

char getNextChar(FILE *file) {
    char c = fgetc(file);
    while (c != EOF && isspace(c)) {
    c = (char) fgetc(file);
    }
    return c;
    }

Result loadMaze(const char filename[], Maze *mazePtr, Coord *startPtr, Coord *goalPtr){


        FILE * file;
        file = fopen(filename, "r");
        if (file==NULL){

            printf("File was not successfully accessed\n");
            return FAIL;

        }

        fscanf(file, "%d", &(mazePtr->rows));
        fscanf(file, "%d", &(mazePtr->cols));

        printf("Rows: %d, Cols: %d\n", mazePtr->rows, mazePtr->cols);

        printf("\n");
        mazePtr->data = (char**) malloc(sizeof(char*) * mazePtr->rows);

        for (int i = 0; i < mazePtr->rows; i++){
            mazePtr->data[i] = (char*) malloc(sizeof(char) * (mazePtr->cols + 1));
        }

        for (int i=0; i<mazePtr->rows; i++){
            for  (int j=0;j<mazePtr->cols; j++){


                (mazePtr->data[i][j])=getNextChar(file);
                }
                mazePtr->data[i][mazePtr->cols] = '\0';

            }

        for (int i=0; i<mazePtr->rows; i++){
            for  (int j=0;j<mazePtr->cols; j++){

                    if (mazePtr->data[i][j]=='F')
                    {
                        goalPtr->x=j;
                        goalPtr->y=i;
                    }


                    if (mazePtr->data[i][j]=='S')
                    {
                        startPtr->x=j;
                        startPtr->y=i;
                    }

                }

            }

        printf("Starting point: %d,%d ; Goal point: %d,%d\n", startPtr->x, startPtr->y, goalPtr->x,goalPtr->y );

        fclose(file);
        return SUCCESS;

        }




void printMaze(FILE *stream, Maze maze){


        printf("\t");
        for (int i=0; i<maze.cols; i++){
            printf("%c", i+65);
         }
         printf("\n");


        for (int i=0; i<maze.rows; i++){
            printf("%d\t", i);
            fprintf(stream, "%s\n",maze.data[i]);

         }
    }

Maze copyMaze(Maze maze){

    //Copy maze from file into another maze;
    Maze mazecopy;
    mazecopy=maze;

    mazecopy.data = (char**) malloc(sizeof(char*) * mazecopy.rows);

    for (int i = 0; i < mazecopy.rows; i++){
        mazecopy.data[i] = (char*) malloc(sizeof(char) * (mazecopy.cols + 1));
    }


    for (int i=0;i<mazecopy.rows;i++){

            for (int j=0;j<mazecopy.cols;j++){

            mazecopy.data[i][j] = maze.data[i][j];

    }

        mazecopy.data[i][mazecopy.cols]='\0';

    }

    if (mazecopy.data==NULL){

            printf("Copy could not be made\n");

        }

    return mazecopy;

    }

void emptyMaze(Maze *mazePtr){

    for (int i = 0; i < mazePtr->rows; i++){
        free(mazePtr->data[i]);
    }


    free(mazePtr->data);
}

int countWallsInLastColumn(Maze maze) {
    int wallCount = 0;
    for (int row = 0; row < maze.rows; row++) {
        if (maze.data[row][maze.cols-1] == '#') {
            wallCount++;
        }
    }
    return wallCount;
}

Result executeCommand(Maze *mazePtr, Coord *posPtr, char command){
    int x = posPtr->x;
    int y = posPtr->y;

    switch (command){
        case 'U':  // Up = row-1

            if (y-1<0){

            printf("Out of bounds\n");
            return FAIL;

            } else if (mazePtr->data[y-1][x] == '#' || mazePtr->data[y-1][x] == ' ') {
                printf("Cannot move up - wall or boundary\n");
            } else if (mazePtr->data[y-1][x] == 'F') {
                printf("Goal reached!\n");
                mazePtr->data[y-1][x] = 'A';
                mazePtr->data[y][x] = '.';
                posPtr->y--;
                printMaze(stdout, *mazePtr);
                return SUCCESS;
            } else if (mazePtr->data[y-1][x] == '.') {
                mazePtr->data[y-1][x] = 'A';
                mazePtr->data[y][x] = '.';
                posPtr->y--;
                printMaze(stdout, *mazePtr);
            }
            break;

        case 'D':  // Down = row+1
            if (y+1>=mazePtr->rows){

            printf("Out of bounds\n");

            return FAIL;

            } else if (mazePtr->data[y+1][x] == '#' || mazePtr->data[y+1][x] == ' ') {
                printf("Cannot move down - wall or boundary\n");
            } else if (mazePtr->data[y+1][x] == 'F') {
                printf("Goal reached!\n");
                mazePtr->data[y+1][x] = 'A';
                mazePtr->data[y][x] = '.';
                posPtr->y++;
                printMaze(stdout, *mazePtr);
                return SUCCESS;
            } else if (mazePtr->data[y+1][x] == '.') {
                mazePtr->data[y+1][x] = 'A';
                mazePtr->data[y][x] = '.';
                posPtr->y++;
                printMaze(stdout, *mazePtr);
            }
            break;

        case 'R':  // Right = col+1
            if (x+1>=mazePtr->cols){

            printf("Out of bounds\n");
            return FAIL;

            } else if (mazePtr->data[y][x+1] == '#' || mazePtr->data[y][x+1] == ' ') {
                printf("Cannot move right - wall or boundary\n");
            } else if (mazePtr->data[y][x+1] == 'F') {
                printf("Goal reached!\n");
                mazePtr->data[y][x+1] = 'A';
                mazePtr->data[y][x] = '.';
                posPtr->x++;
                printMaze(stdout, *mazePtr);
                return SUCCESS;
            } else if (mazePtr->data[y][x+1] == '.') {
                mazePtr->data[y][x+1] = 'A';
                mazePtr->data[y][x] = '.';
                posPtr->x++;
                printMaze(stdout, *mazePtr);
            }
            break;

        case 'L':  // Left = col-1
            if (x-1<0){

            printf("Out of bounds\n");
            return FAIL;

            } else if (mazePtr->data[y][x-1] == '#' || mazePtr->data[y][x-1] == ' ') {
                printf("Cannot move left - wall or boundary\n");
            } else if (mazePtr->data[y][x-1] == 'F') {
                printf("Goal reached!\n");
                mazePtr->data[y][x-1] = 'A';
                mazePtr->data[y][x] = '.';
                posPtr->x--;
                printMaze(stdout, *mazePtr);
                return SUCCESS;
            } else if (mazePtr->data[y][x-1] == '.') {
                mazePtr->data[y][x-1] = 'A';
                mazePtr->data[y][x] = '.';
                posPtr->x--;
                printMaze(stdout, *mazePtr);
            }
            break;

        default:
            printf("Please enter a valid command: U (up), D (down), L (left), or R (right)\n");
    }

    return FAIL;
}


List createList(){

List *list=NULL;
list=(List*)malloc(sizeof(List));

return list;

}

int isEmpty(List list){

    if (*list==NULL){
        return 1;
    }
    return 0;



}



void addNodeAtBack(List *listPtr, Coord pos){

    //Create node
    //Assign Node with Null Pointer with address of new node

}



void clearList(List *listPtr){

    //Loop through list
    //Start at first ptr -> extract ptr, free node, move to next ptr and repeat (loop)

    }


const char commandArray[] = {'U', 'D', 'L', 'R'};
