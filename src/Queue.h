//
// Created by 蔡亦华 on 2019/10/17.
//

#ifndef DS_BINARY_TREE_QUEUE_H
#define DS_BINARY_TREE_QUEUE_H

#endif //DS_BINARY_TREE_QUEUE_H

typedef int QElemType;

typedef struct qnode QNode;

struct qnode{
    QElemType data;
    QNode *next;
};

typedef struct {
    QNode *front;
    QNode *rear;
} *Queue;

void InitQueue (Queue * );

void EnQueue (Queue, QElemType);

QElemType DeQueue (Queue);

void PrintQueue (Queue);
