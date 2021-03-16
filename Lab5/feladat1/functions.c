//
// Created by Jozsi on 2021-03-16.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

STACK *create(int capacity) {
    STACK *myStack=(STACK*)malloc(sizeof(STACK*));
    if(!myStack)
    {
        printf("Error");
        return 0;
    }
    myStack->sp=-1;
    myStack->maxsize=capacity;
    myStack->items=(int*)malloc(myStack->maxsize*sizeof (int));
    if(!myStack->items)
    {
        printf("Error");
        return 0;
    }
    return myStack;
}

int isEmpty(STACK *myStack) {
    return myStack->sp==-1;
}
int isFull(STACK *myStack) {
    return myStack->sp==myStack->maxsize-1;
}

void push(STACK *myStack, int a) {
    myStack->sp++;
    myStack->items[myStack->sp]=a;
}

int pop(STACK *myStack) {
    int a;
    a=myStack->items[myStack->sp];
    myStack->sp--;
    return a;
}
int top(STACK *myStack) {
    int a;
    a=myStack->items[myStack->sp];
    return a;
}