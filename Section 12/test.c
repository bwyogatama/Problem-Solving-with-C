#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TNode *Address;

typedef struct TNode{
    // Data Variabel
    int elmt;
    // Node Linker
    Address next;
}Node;

typedef struct {
    // qHead Pointer
    Node* qhead;
    // qTail Pointer
    Node* qtail;
} typeQueue;

void pushTail (int Data, typeQueue *queue);

int popHead(typeQueue* q);

int main(){
    int number, x, a=1, element;

    typeQueue q;
    q.qhead = NULL;
    q.qtail = NULL;

    while(a) {
        printf("1. Push\n2. Pop\n3. Exit\nChoice :\n");
        scanf("%d", &number);
        if(number == 1) {
            printf("Enter next element :\n");
            scanf("%d", &x);
            pushTail(x, &q);
            printf("Head = %d\nTail = %d\n", q.qhead->elmt, q.qtail->elmt);
        }
        else {
            if(number == 2) {
                element = popHead(&q);
                printf("Head = %d\nTail = %d\nElement = %d\n", q.qhead->elmt, q.qtail->elmt, element);
            }
            else {
                a = 0;
            }
        }
    }
    return 0;
}

void pushTail (int Data, typeQueue *queue) {
    Node* NNode = malloc(sizeof(Node));
    NNode->elmt = Data;
    NNode->next = NULL;

    if( queue->qhead == NULL ){
        queue->qhead = NNode;
        queue->qtail = NNode;
    }
    else {
        queue->qtail->next = NNode;
        queue->qtail = NNode;
    }
}

// (* (*queue.qhead). elmt)
 while ((charac = getchar())!=EOF && charac !='\n')

int popHead(typeQueue* q){
    int tmp = q->qhead->elmt;
    Node* current = q->qhead;
    Node* next = q->qhead->next;

    if(q->qhead == q->qtail) {
        free(q->qhead);
    }
    else {
        free(q->qhead);
        q->qhead = next;
    }

    free(current);

    return tmp;
}
