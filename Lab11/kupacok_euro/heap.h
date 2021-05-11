//
// Created by Jozsi on 2021-05-11.
//
#include <stdio.h>
#include <stdlib.h>

#ifndef KUPACOK_EURO_HEAP_H
#define KUPACOK_EURO_HEAP_H

typedef struct euro{
    int year,month,price;
}euro;

typedef struct heap{
    euro *data;
    int size;
    int maxSize;
}heap;

heap *createHeap(int max);
void insert(heap* h,int year, int month, int price);
void up(heap* h, int i);

#endif //KUPACOK_EURO_HEAP_H
