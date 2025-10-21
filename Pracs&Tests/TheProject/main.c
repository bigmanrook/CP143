#include <stdio.h>
#include <stdlib.h>
#include "libs.h"

//Disclaimer: Claude.AI was used to debug in some cases where I was sleep deprived or just incapable of finding the
//problem that I caused.

int main()
{
    int result;
    FILE * fileptr;
    char file[256];
    int count=0;

    printf("Enter in file name\n");
    scanf("%255s", file);
    Maze maze, MazeCopy;
    Coord startingpt;
    Coord goal;
    List *pathPtr = createList();

    // Initialize maze structure
    maze.rows = 0;
    maze.cols = 0;
    srand(time(NULL));

    if (loadMaze(file, &maze, &startingpt, &goal)==FAIL){
        free(pathPtr);
        return 1;
    }
    else {
        char command;
        printMaze(stdout, maze);

        MazeCopy = copyMaze(maze);

        // Add starting position to list

            //put the commented out code in do....while(result!=SUCCESS) loop
            //printf("Enter in up (U), down (D), left (L) or right (R)\n");
            //scanf(" %c", &command); //This needs to be automatically done by the computer


            /*
            result = executeCommand(&MazeCopy, &startingpt, command);

            // Print current coordinates after each move
            if (result == SUCCESS || result == FAIL) {
                printf("Agent's Coordinates: (%d, %d)\n", startingpt.x, startingpt.y);
            }

            // Add position to list if move was successful or hit a wall
            if (result == SUCCESS) {
                addNodeAtBack(list, startingpt);
            } else if (result == FAIL) {
                // Still add to list even if move failed (hit wall/boundary)
                addNodeAtBack(list, startingpt);
            }
            */

        //result = randomTraversal(&MazeCopy,startingpt,goal, pathPtr, 5000);

        result = searchMaze(&MazeCopy, startingpt, goal);



        extractPath(MazeCopy, startingpt, goal, pathPtr);

        printListContent(stdout, *pathPtr);
        FILE * fileptr;
        scanf("%s", file);
        fileptr=fopen(strcat(file, ".txt"), "w");
        printMaze(fileptr, MazeCopy);
        printListContent(fileptr, *pathPtr);
        fclose(fileptr);


        if (MazeCopy.data==NULL){
            clearList(pathPtr);
            free(pathPtr);
            return 2;
        }
        else {
            printMaze(stdout, MazeCopy);
            emptyMaze(&maze);
            emptyMaze(&MazeCopy);
            clearList(pathPtr);
            free(pathPtr);
        }


    }

    return 0;
}
