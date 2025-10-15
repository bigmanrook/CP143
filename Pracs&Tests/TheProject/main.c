#include <stdio.h>
#include <stdlib.h>
#include "libs.h"

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
    List *list = createList();

    // Initialize maze structure
    maze.rows = 0;
    maze.cols = 0;

    if (loadMaze(file, &maze, &startingpt, &goal)==FAIL){
        free(list);
        return 1;
    }
    else {
        char command;
        printMaze(stdout, maze);

        MazeCopy = copyMaze(maze);

        // Add starting position to list

        addNodeAtFront(list, startingpt);

        do {
            printf("Enter in up (U), down (D), left (L) or right (R)\n");
            scanf(" %c", &command);
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

        } while (result!=SUCCESS);

        if (MazeCopy.data==NULL){
            clearList(list);
            free(list);
            return 2;
        }
        else {
            printMaze(stdout, MazeCopy);
            emptyMaze(&maze);
            emptyMaze(&MazeCopy);
            clearList(list);
            free(list);
        }
    }

    return 0;
}
