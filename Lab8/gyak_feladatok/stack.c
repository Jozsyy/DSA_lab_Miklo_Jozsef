//
// Created by Jozsi on 2021-04-13.
//

#include "stack.h"
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

void feltoltes_stack(STACK **mystack){
    STACK *tempS=create(20);
    int n=0;
    for(int i=0;i<tempS->maxsize;++i){
        if(isFull(tempS)==0){
            push(tempS,n);
        }
        else{
            printf("A verem megtelt!");
            break;
        }
        n=n+2;
    }
    (*mystack)=tempS;
}

void print_stack(STACK *mystack){
    for(int i=0;i<mystack->maxsize;++i){
        if(isEmpty(mystack)==0){
            printf("%i ",pop(mystack));
        }
        else{
            printf("A verem mar ures!");
            break;
        }
    }
}

