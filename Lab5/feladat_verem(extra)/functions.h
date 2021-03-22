//
// Created by Jozsi on 2021-03-22.
//

#ifndef FELADAT_VEREM_EXTRA__FUNCTIONS_H
#define FELADAT_VEREM_EXTRA__FUNCTIONS_H

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
void zarojelezes(const char *fileName, STACK *v);
#endif //FELADAT_VEREM_EXTRA__FUNCTIONS_H
