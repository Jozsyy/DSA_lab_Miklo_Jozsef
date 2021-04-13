//
// Created by Jozsi on 2021-04-13.
//

#ifndef GYAK_FELADATOK_STACK_H
#define GYAK_FELADATOK_STACK_H

typedef struct
{
    int maxsize;
    int sp;
    int *items;
} STACK;

STACK *create(int capacity);
void feltoltes_stack(STACK **mystack);
void print_stack(STACK *mystack);
int isEmpty (STACK *myStack);
int isFull (STACK *myStack);
void push (STACK *myStack, int a);
int pop (STACK *myStack);


#endif //GYAK_FELADATOK_STACK_H
