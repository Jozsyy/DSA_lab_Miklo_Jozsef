//
// Created by Jozsi on 2021-06-04.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef FELADAT1_HEAP_H
#define FELADAT1_HEAP_H

typedef struct heap{
    int *data;
    int size;
    int maxSize;
}heap;

heap *createHeap(int max);
void insert(heap* h,int data);
void up(heap* h, int i);
void down(heap* h, int i);
int torolmax(heap *h);
void kupacrendez(heap *h, int N);

#endif //FELADAT1_HEAP_H
