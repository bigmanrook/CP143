#include <stdio.h>
#include <stdlib.h>

typedef struct node {

int value;
    struct Node *rightptr;
    struct Node *leftptr;

}Node;

typedef struct tree {

    struct Node *ptr;

}BT;



int main()
{

    //Code can be written to write data to the binary tree
    Node *root=malloc(sizeof(Node)); //this is the root node
    root->value=0;
    root->leftptr=NULL;
    root->rightptr=NULL;

    insertNode(root); //Testing out insertion
    Node *curr=malloc(sizeof(Node)); //this is the root node
    curr=root;
    //Inserting for set amount of times - user can set this value to any, and the placement of nodes is pretty simple considering its counting from 1-4
    //Only nodes on the right will be created because i is increasing
    int amountoftime = 4;

    for (int i=0;i<amountoftime;i++){

        insertNode(curr, i);

    }

    //printing out nodes
    curr=root;
    for (int i=0;i<amountoftime;i++){

        insertNode(curr, i);

    }

    return 0;
}

void insertNode (Node *node, int value){

    if (node->value<value){

        Node *newLnode=malloc(sizeof(Node));
        newLnode->value=value;
        newLNode->rightptr=NULL;
        newLNode->leftptr=NULL;
        node->leftptr=newLnode;

    }
    else if (node->value<value){

        Node *newRnode=malloc(sizeof(Node));
        newRnode->value=value;
        newRNode->rightptr=NULL;
        newRNode->leftptr=NULL;
        node->rightptr=newRnode;

    }


}

//traversal methods

void inOrder(Node node){



}

void outOrder(){



}




