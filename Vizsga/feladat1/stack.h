//
// Created by Jozsi on 2021-06-04.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifndef FELADAT1_STACK_H
#define FELADAT1_STACK_H

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
void readFromFile(STACK *myStack, const char *fileName);

#endif //FELADAT1_STACK_H
