#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

//Key difference: Stacks are Last In - First out

struct Stack {
    char ch;
    struct Stack * nextPtr;
};

typedef struct Stack stackNode;

void insertNode(stackNode * headPtr, int i, char newch);
void freeStack(stackNode **headPtr);
void push(stackNode **headPtr, char newch);
char pop(stackNode **headPtr);
char peek(stackNode *headPtr);
int isEmpty(stackNode *headPtr);
void printStack(stackNode *headPtr);


int main()
{
    stackNode * headPtr;
    headPtr = malloc(sizeof(stackNode));
    headPtr->ch = 'A';
    headPtr->nextPtr = NULL;


    stackNode * tmpstackNode = headPtr;  // headPtr - making tmpstackNode point to headPtr
    char txt[] = "BCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < strlen(txt); i++) {
        tmpstackNode->nextPtr = malloc(sizeof(stackNode)); //first iteration, it allocates memory to Headptr's pointer member
        tmpstackNode = tmpstackNode->nextPtr; //now it places its second paper down, and makes another stackNode which is pointed to by the previous stackNode
        tmpstackNode->ch = txt[i]; //Assigning data to the stackNode
        tmpstackNode->nextPtr = NULL;  // Initialize nextPtr to NULL, which will in the next iteration be replaced with the next stackNode, and in the last iteration be left as NULL
    }

    insertNode(headPtr, 10, 'j');

    // Print from the beginning
    tmpstackNode = headPtr;
    while (tmpstackNode != NULL) {
        printf("%c", tmpstackNode->ch);
        tmpstackNode = tmpstackNode->nextPtr;
    }
    printf("\n");

    // Free allocated memory (important!)
    tmpstackNode = headPtr;
    while (tmpstackNode != NULL) {
        stackNode * temp = tmpstackNode;
        tmpstackNode = tmpstackNode->nextPtr;
        free(temp);
    }
    return 0;
}

void insertNode(stackNode *headPtr, int i, char newch){
    // Create node at position i
    // i is the position where we are inserting (0-indexed)

    if (i < 0){
        printf("Invalid position\n");
        return;
    }

    if (i == 0){
        // Insert at head - this would require a pointer to pointer
        // or returning the new head
        printf("Cannot insert at head with this function signature\n");
        return;
    }

    // Find the node at position i-1
    int n = 0;
    stackNode *currNode = headPtr;

    while (n < i-1 && currNode != NULL){
        n++;
        currNode = currNode->nextPtr;
    }

    // Check if we found the correct position
    if (currNode != NULL){
        // Create new node
        stackNode *newNode = malloc(sizeof(stackNode));

        if (newNode == NULL){
            printf("Memory allocation failed\n");
            return;
        }

        newNode->ch = newch;
        newNode->nextPtr = currNode->nextPtr;  // New node points to next node
        currNode->nextPtr = newNode;           // Current node points to new node

        printf("Node inserted successfully at position %d\n", i);
    }
    else {
        printf("Invalid insertion position - position %d does not exist\n", i);
    }
}

// Push: Add a node to the top of the stack
void push(stackNode **headPtr, char newch){
    // Create new node
    stackNode *newNode = malloc(sizeof(stackNode));

    if (newNode == NULL){
        printf("Memory allocation failed\n");
        return;
    }

    // Set data in new node
    newNode->ch = newch;

    // Link new node to current head (or NULL if stack is empty)
    newNode->nextPtr = *headPtr;

    // Update head to point to new node
    *headPtr = newNode;

    printf("Pushed '%c' onto stack\n", newch);
}

// Pop: Remove and return a node from the top of the stack
char pop(stackNode **headPtr){
    // Check if stack is empty
    if (*headPtr == NULL){
        printf("Stack is empty - cannot pop\n");
        return '\0';  // Return null character for empty stack
    }

    // Get the top node
    stackNode *tempNode = *headPtr;

    // Get the character from the top node
    char ch = tempNode->ch;

    // Move head to the next node
    *headPtr = tempNode->nextPtr;

    // Free the memory of the popped node
    free(tempNode);

    printf("Popped '%c' from stack\n", ch);
    return ch;
}

// Optional: Peek at the top of the stack without removing it
char peek(stackNode *headPtr){
    if (headPtr == NULL){
        printf("Stack is empty\n");
        return '\0';
    }

    printf("Top of stack: '%c'\n", headPtr->ch);
    return headPtr->ch;
}

// Optional: Check if stack is empty
int isEmpty(stackNode *headPtr){
    return headPtr == NULL;
}

// Optional: Print the entire stack
void printStack(stackNode *headPtr){
    if (headPtr == NULL){
        printf("Stack is empty\n");
        return;
    }

    printf("Stack (top to bottom): ");
    stackNode *current = headPtr;
    while (current != NULL){
        printf("%c ", current->ch);
        current = current->nextPtr;
    }
    printf("\n");
}

// Optional: Free the entire stack
void freeStack(stackNode **headPtr){
    while (*headPtr != NULL){
        stackNode *temp = *headPtr;
        *headPtr = (*headPtr)->nextPtr;
        free(temp);
    }
    printf("Stack freed\n");
}
