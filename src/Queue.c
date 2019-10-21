//
// Created by 蔡亦华 on 2019/10/17.
//

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void InitQueue(Queue *queue_ptr) {
    *queue_ptr = (Queue)malloc(sizeof(Queue));
    (*queue_ptr)->front = NULL;
    (*queue_ptr)->rear = NULL;
}

void EnQueue(Queue queue, QElemType x) {
    QNode *new_node = (QNode *) malloc(sizeof(QNode));
    new_node->data = x;
    new_node->next = NULL;
    //printf("Hello, World!\n");
    /*
    if (queue == NULL){
        printf("Hello, World!\n");
        return;
    }*/

    if (queue->rear == NULL && queue->front == NULL) {
        queue->front = new_node;
        queue->rear = new_node;
    } else {
        queue->rear->next = new_node;
        queue->rear = new_node;

    }

}

QElemType DeQueue(Queue queue) {
    QElemType f;
    QNode *front = queue->front;
    f = queue->front->data;
    queue->front = queue->front->next;
    free(front);
    return f;
}

void PrintQueue(Queue queue) {
    QNode *node = queue->front;

    while (node != NULL) {
        //printf("Hello, World!\n");
        printf("%d --> ", node->data);
        node = node->next;
    }
}
