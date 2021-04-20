//
// Created by Jozsi on 2021-04-20.
//

#ifndef PARCIALIS_QUEUE_H
#define PARCIALIS_QUEUE_H
#include <string.h>

typedef struct
{
    int maxsize; // a verem maximális kapacitása
    int front, rear;
    char* karakterek;
} QUEUE;

QUEUE* create(int capacity);
int isEmpty(QUEUE *myQueue);
int isFull(QUEUE *myQueue);
void insert(QUEUE *myQueue,char a);
void print(QUEUE *myQueue,const char *fileName1,const char *fileName2);
void destroy(QUEUE *myQueue);

#endif //PARCIALIS_QUEUE_H
