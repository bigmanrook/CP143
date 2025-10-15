#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    int value;
    struct node *rightptr;
    struct node *leftptr;

}Node;

typedef struct tree {

    struct node *ptr;

}BT;

void insertNode (Node **node, int value);
void inOrder(Node *node);
void outOrder(Node *node);

int main()
{

    //Code can be written to write data to the binary tree
    Node *root=malloc(sizeof(Node)); //this is the root node
    root->value=0;
    root->leftptr=NULL;
    root->rightptr=NULL;

    //Inserting for set amount of times - user can set this value to any, and the placement of nodes is pretty simple considering its counting from 1-4
    //Only nodes on the right will be created because i is increasing
    int amountoftime = 5;

    for (int i=1;i<amountoftime;i++){

        insertNode(&root, i);

    }

    inOrder(root);
    outOrder(root);

    return 0;
}

void insertNode (Node **node, int value){

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
        printf("%d", node->value);
        inOrder(node->rightptr);

    }

}

void outOrder(Node *node){

    if (node!=NULL){

        printf("%d", node->value);
        outOrder(node->leftptr); //Due to the nature of the loop in main, this does nothing to the order of the node value printout (values only go in right branch)
        outOrder(node->rightptr);

    }

}




