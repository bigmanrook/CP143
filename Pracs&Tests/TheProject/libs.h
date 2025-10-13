  #ifndef LIBS.H
  #define LIBS.H
  #include <stdio.h>
  #include <stdlib.h>
  #include <ctype.h>
  #include <string.h>


    //structures

    struct listNode {
    Coord pos;
    struct listNode *nextPtr;
    };
    typedef struct listNode ListNode;

    typedef struct {
    ListNode *frontPtr, *backPtr;
    } List;

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

  //function prototypes
  char getNextChar(FILE *file);
  void printMaze(FILE *stream, Maze maze);
  void emptyMaze(Maze *mazePtr);
  Maze copyMaze(Maze maze);
  Result loadMaze(const char filename[], Maze *mazePtr, Coord *startPtr, Coord *goalPtr);
  int countWallsInLastColumn(Maze maze);
  Result executeCommand(Maze *mazePtr, Coord *posPtr, char command);
  List createList();
  int isEmpty(List list);
  void addNodeAtBack(List *listPtr, Coord pos);
  void addNodeAtFront(List *listPtr, Coord pos);
  Coord removeNodeFromFront(List *listPtr);
  void clearList(List *listPtr);









  #endif //LIBS.H
