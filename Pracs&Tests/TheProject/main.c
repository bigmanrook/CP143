#include <stdio.h>
#include <stdlib.h>
#include "libs.h"

int main()
{
    int result;
    //Sample Output
    /*Enter the maze filename: maze1.txt -> take file name, search for file and read from file
    Maze successfully loaded! (create error code)
    Maze has 10 rows and 10 columns -> count chars in line, count how many lines are read (assuming all are square mazes)
    Coordinates of start: (0,9) -> similar to finding delimiter
    Coordinates of goal: (7,2) -> similar to finding delimiter
    Printing the maze: -> read from maze for each char, for loops?

    Test the functions in this main code before implementation
    */

    FILE * fileptr;
    char file[256];

    printf("Enter in file name\n");
    scanf("%255s", file);
    Maze maze, MazeCopy;  // Not a pointer, or use malloc
    Coord startingpt;  // Not a pointer, or use malloc
    Coord goal;  // Not a pointer, or use malloc
    List list = createList();

    // Initialize maze structure
    maze.rows = 0;
    maze.cols = 0;
    // maze.data = NULL;  // If you have a data field


    if (loadMaze(file, &maze, &startingpt, &goal)==FAIL){

        return 1;

    }
    else {
        char command;
        printMaze(stdout, maze);

        MazeCopy = copyMaze(maze);


        do {
            printf("Enter in up (U), down (D), left (L) or right (R)\nw");
            scanf(" %c", &command);
            result = executeCommand(&MazeCopy, &startingpt, command);
            addNodeAtFront(&list, startingpt);
            printf("Agent's Coordinates: (%d, %d)\n", list.frontPtr->pos.x, list.frontPtr->pos.y);


        } while (result!=SUCCESS);

        if (MazeCopy.data==NULL){

            return 2;

        }
        else {
            emptyMaze(&maze);
            emptyMaze(&MazeCopy);

        }

        //Program needs one list storing all coordinates, that will then be stored in a textfile
        //Create list -> store first node in front,
        //Every node needs to be added from the back after that




    }





    return 0;
}



