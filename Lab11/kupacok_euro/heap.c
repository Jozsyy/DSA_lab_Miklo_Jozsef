//
// Created by Jozsi on 2021-05-11.
//

#include "heap.h"

heap *createHeap(int max) {
    heap* h = (heap*)malloc(sizeof(heap));
    h->size = 0;
    h->maxSize = max;
    h->data = (euro*)malloc(max * sizeof(euro));
    return h;
}

void insert(heap* h, int year, int month, int price) {
    h->size++;
    h->data[h->size].year = year;
    h->data[h->size].month = month;
    h->data[h->size].price = price;
    up(h, h->size);
}

void up(heap* h, int i) {
    int seged;
    while ((i > 1) && (h->data[i / 2].price < h->data[i].price)) {
        seged = h->data[i / 2].year;
        h->data[i / 2].year = h->data[i].year;
        h->data[i].year = seged;

        seged = h->data[i / 2].month;
        h->data[i / 2].month = h->data[i].month;
        h->data[i].month = seged;

        seged = h->data[i / 2].price;
        h->data[i / 2].price = h->data[i].price;
        h->data[i].price = seged;
        i /= 2;
    }
}
