//
// Created by Jozsi on 2021-03-23.
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

QUEUE *create(int capacity) {
    QUEUE* myQueue;
    myQueue=(QUEUE*)malloc(sizeof(QUEUE));
    if(!myQueue){
        printf("Error: Couldn't allocate memory!");
        return NULL;
    }
    myQueue->front= -1;
    myQueue->rear= -1;
    myQueue->maxsize=capacity;

    myQueue->items=(int*)malloc(myQueue->maxsize*sizeof(int));
    if(!myQueue->items){
        printf("Error:Couldn't allocate memory!");
        return NULL;
    }
    return myQueue;
}

bool isEmpty(QUEUE *myQueue){
    return (myQueue->rear == myQueue->front && myQueue->front==-1) || (myQueue->rear<myQueue->front);
}

bool isFull(QUEUE *myQueue){
    return myQueue->rear == myQueue->maxsize-1;
}

void put(QUEUE *myQueue,int a){
    if(!isFull(myQueue) && !isEmpty(myQueue)){
        myQueue->rear++;
        myQueue->items[myQueue->rear]=a;
    }
    else if(!isFull(myQueue) && isEmpty(myQueue)){
        myQueue->rear++;
        myQueue->items[myQueue->rear]=a;
        myQueue->front++;
    }
}

int get(QUEUE *myQueue){
    int tmp;
    if(!isEmpty(myQueue)) {
        tmp=myQueue->items[myQueue->front];
        myQueue->front++;
    }
    else{
        printf("Nincs mit kitorolni!");
        return 0;
    }
    myQueue->front++;
    return tmp;
}

int frontElement(QUEUE *myQueue){
    if(!isEmpty(myQueue)){
        return myQueue->items[myQueue->front];
    }
}


