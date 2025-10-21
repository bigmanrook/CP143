#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    char value;
    struct node *rightptr;
    struct node *leftptr;

}Node;

typedef struct tree {

    struct node *ptr;

}BT;

typedef BT *BTPtr;


void insertNode (Node **node, char value);
void inOrder(Node *node);
void preOrder(Node *node);
void postOrder(Node *node);
void deleteTree(BT *BTPtr);

int main()
{

    //Code can be written to write data to the binary tree
    Node *root=malloc(sizeof(Node)); //this is the root node
    root->value=0;
    root->leftptr=NULL;
    root->rightptr=NULL;

    //Inserting for set amount of times - user can set this value to any, and the placement of nodes is pretty simple considering its counting from 1-4
    //Only nodes on the right will be created because i is increasing
    printf("Enter in a string:\n");
    char buffer[20];

    scanf("%s", buffer);
    int i =0;
    char c=buffer[i];


    while (i<20&&c!='\0'){

        c = buffer[i++];
        insertNode(&root, c);


    }

    inOrder(root);
    preOrder(root);

    return 0;
}

void insertNode (Node **node, char value){

    Node *newNode=malloc(sizeof(Node));

    if (*node==NULL){
        newNode->value=value;
        newNode->rightptr=NULL;
        newNode->leftptr=NULL;
        *node=newNode;
        return;
    }



    if (value>(*node)->value){

        insertNode(&((*node)->rightptr), value);

    }
    else if (value<(*node)->value){

        insertNode(&((*node)->leftptr), value);

    }


}

//traversal methods

void inOrder(Node *node){

    if (node!=NULL){

        inOrder(node->leftptr);
        printf("%c", node->value);
        inOrder(node->rightptr);

    }

}

void preOrder(Node *node){

    if (node!=NULL){

        printf("%c", node->value);
        preOrder(node->leftptr);
        preOrder(node->rightptr);

    }

}

void postOrder(Node *node){

    if (node!=NULL){

        printf("%c", node->value);
        postOrder(node->rightptr);
        postOrder(node->leftptr);


    }

}


void deleteTree(BT *BTPtr) {
    if (*BTPtr != NULL) {
    deleteTree(&((*BTPtr)->leftPtr));
    deleteTree(&((*BTPtr)->rightPtr));
    printf("Deleting node containing %c\n", (*BTPtr)->data);
    free(*BTPtr);
    *BTPtr = NULL;
    }
} // function deleteTree - from practical 12 page


