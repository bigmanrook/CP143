#include <stdio.h>
#include <stdlib.h>

struct listNode {
    char ch;
    struct listNode * nextPtr;
};

typedef struct listNode node;

int main()
{
    node * headPtr;
    headPtr = malloc(sizeof(node));
    headPtr->ch = 'H';

    node * AnodePtr;
    AnodePtr = malloc(sizeof(node));
    AnodePtr->ch = 'E';
    AnodePtr->nextPtr = NULL;
    headPtr->nextPtr = AnodePtr;

    node * tmpNode = AnodePtr;  // Start from AnodePtr, not headPtr
    char txt[] = "stuff";
    int i;

    for (i = 0; i < 5; i++) {
        tmpNode->nextPtr = malloc(sizeof(node));
        tmpNode = tmpNode->nextPtr;
        tmpNode->ch = txt[i];
        tmpNode->nextPtr = NULL;  // Initialize nextPtr to NULL
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
