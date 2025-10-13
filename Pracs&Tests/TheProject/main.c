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

            scanf("%c", &command);
            result = executeCommand(&MazeCopy, &startingpt, command);

        } while (result=1);

        if (MazeCopy.data==NULL){

            return 2;

        }
        else {

            //printMaze(stdout, MazeCopy);
            //printf("Walls in last column: %d\n", countWallsInLastColumn(maze));
            emptyMaze(&maze);
            emptyMaze(&MazeCopy);

        }




    }

    List list=(List)malloc(sizeof(List));




    return 0;
}



