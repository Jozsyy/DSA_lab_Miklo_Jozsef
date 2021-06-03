//
// Created by Jozsi on 2021-06-03.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef FELADAT_STACK_STACK_H
#define FELADAT_STACK_STACK_H
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
void readFromFile(STACK *myStack, const char *fileName);
void statistic(STACK *myStack);

#endif //FELADAT_STACK_STACK_H
