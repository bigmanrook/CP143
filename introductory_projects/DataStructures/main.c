#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

struct listNode {
    char ch;
    struct listNode * nextPtr;
};

typedef struct listNode node;

int main()
{
    node * headPtr;
    headPtr = malloc(sizeof(node));
    headPtr->ch = 'A';
    headPtr->nextPtr = NULL;


    node * tmpNode = headPtr;  // headPtr - making tmpNode point to headPtr
    char txt[] = "BCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < strlen(txt); i++) {
        tmpNode->nextPtr = malloc(sizeof(node)); //first iteration, it allocates memory to Headptr's pointer member
        tmpNode = tmpNode->nextPtr; //now it places its second paper down, and makes another node which is pointed to by the previous node
        tmpNode->ch = txt[i]; //Assigning data to the node
        tmpNode->nextPtr = NULL;  // Initialize nextPtr to NULL, which will in the next iteration be replaced with the next node, and in the last iteration be left as NULL
    }

    // Print from the beginning
    tmpNode = headPtr;
    while (tmpNode != NULL) {
        printf("%c", tmpNode->ch);
        tmpNode = tmpNode->nextPtr;
    }
    printf("\n");

    // Free allocated memory (important!)
    tmpNode = headPtr;
    while (tmpNode != NULL) {
        node * temp = tmpNode;
        tmpNode = tmpNode->nextPtr;
        free(temp);
    }
    return 0;
}
