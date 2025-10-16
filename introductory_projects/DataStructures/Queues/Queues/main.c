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
    printQueue(queue1);


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

        n->nextptr=NULL;
        n->data=c;
        queue->back=n;

    }


}

int isEmpty(q *queue){

    if (queue->front==NULL&&queue->back==NULL){

            return 1;

        }

}

void printQueue(q *queue){

    node *curr = queue->front;

    while (curr!=NULL){

        printf("%c", curr->data);
        curr=curr->nextptr;

    }

}
