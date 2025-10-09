  #ifndef LIBS.H
  #define LIBS.H
  #include <stdio.h>
  #include <stdlib.h>
  #include <ctype.h>
  #include <string.h>


    //structures
      typedef struct {
    int rows, cols;
    char **data;
    } Maze;

    typedef struct {
    int x, y;
    } Coord;


    enum ResultType {SUCCESS, FAIL};
    typedef enum ResultType Result;
    extern const char commandArray[];

  // Header content here
  //function prototypes
  char getNextChar(FILE *file);
  void printMaze(FILE *stream, Maze maze);
  void emptyMaze(Maze *mazePtr);
  Maze copyMaze(Maze maze);
  Result loadMaze(const char filename[], Maze *mazePtr, Coord *startPtr, Coord *goalPtr);
  int countWallsInLastColumn(Maze maze);
  Result executeCommand(Maze *mazePtr, Coord *posPtr, char command);





  #endif //LIBS.H
