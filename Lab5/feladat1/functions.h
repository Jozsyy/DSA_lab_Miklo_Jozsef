//
// Created by Jozsi on 2021-03-16.
//

#ifndef FELADAT1_FUNCTIONS_H
#define FELADAT1_FUNCTIONS_H

typedef struct
{
    int maxsize; // a verem max kapacitasa
    int sp;
    int *items;
} STACK;

STACK * create(int capacity);
int isEmpty (STACK *myStack);
int isFull (STACK *myStack);
void push (STACK *myStack, int a);
int pop (STACK *myStack);
int top (STACK *myStack);

#endif //FELADAT1_FUNCTIONS_H
