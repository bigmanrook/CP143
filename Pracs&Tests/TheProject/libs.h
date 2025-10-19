  #ifndef LIBS.H
  #define LIBS.H
  #include <stdio.h>
  #include <stdlib.h>
  #include <ctype.h>
  #include <string.h>
  #include <time.h>
//Disclaimer: Claude.AI was used to debug in some cases where I was sleep deprived or just incapable of finding the
//problem that I caused.

    //structures

      typedef struct {
    int rows, cols;
    char **data;
    } Maze;

    typedef struct {
    int x, y;
    } Coord;

    struct listNode {
    Coord pos;
    struct listNode *nextPtr;
    };
    typedef struct listNode ListNode;

    typedef struct {
    ListNode *frontPtr, *backPtr;
    } List;

    /**<
    typedef struct {
    char type[15];
    double area;
    char colour[10];
    } Shape;
     */


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
  Result executeCommand(const Maze *mazePtr, Coord *posPtr, char command);
  Result randomTraversal(const Maze *mazePtr, Coord start, Coord goal, List *pathPtr, int maxSteps);

  //List function prototypes

  List* createList();
  int isEmpty(List list);
  void addNodeAtBack(List *listPtr, Coord pos); //Enqueue
  void addNodeAtFront(List *listPtr, Coord pos);//Push function
  Coord removeNodeFromFront(List *listPtr); //Pop function
  void clearList(List *listPtr);
  void printListContent(FILE *stream, List list);













  #endif //LIBS.H
