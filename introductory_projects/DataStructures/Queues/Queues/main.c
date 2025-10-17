#include <stdio.h>
#include <stdlib.h>

typedef struct queueNode{
    char data;
    struct queueNode *nextptr;

} node;

typedef struct queue{

    node *front, *back;

} q;

void Push(q *queue, char c);
int isEmpty(q *queue);
void printQueue(q *queue);
char Pop(q *queue);
char Peek(q *queue);

int main()
{
    char c;
    q *queue1=malloc(sizeof(q));//Create queue

    node *f=malloc(sizeof(node));//Create front node
    node *b=malloc(sizeof(node));//Create back node
    f=NULL;
    b=NULL;

    queue1->front=f;
    queue1->back=b;

    c='A';
    Push(queue1, c);

    for (int i=0;i<25;i++){

        c++;
        Push(queue1, c);

    }

    printQueue(queue1);
    printf("%c", Pop(queue1));

    return 0;
}

void Push(q *queue, char c){

    node *n=malloc(sizeof(node));

    if (isEmpty(queue)){

        n->nextptr=NULL;
        n->data=c;
        queue->front=n;
        queue->back=queue->front;

    }
    else {

        n->nextptr=NULL; //node next pointer nullified (last node)
        n->data=c; //data put into node
        queue->back->nextptr=n; //Assigning n to old node
        queue->back=n; //making n your back node


    }


}

char Pop(q *queue){

    if (isEmpty(queue)){

        printf("Nothing in queue");

    }
    else {

        char c = queue->front->data;
        queue->front=queue->front->nextptr;
        return c;

    }

}

char Peek(q *queue){

    if (isEmpty(queue)){

        printf("Nothing in queue");

    }
    else {

        char c = queue->front->data;
        return c;

    }

}

int isEmpty(q *queue){

    if (queue->front==NULL&&queue->back==NULL){

            return 1;

        }
    return 0;

}

void printQueue(q *queue){

    node *curr = queue->front;

    while (curr!=NULL){

        printf("%c\n", curr->data);
        curr=curr->nextptr;

    }

}
