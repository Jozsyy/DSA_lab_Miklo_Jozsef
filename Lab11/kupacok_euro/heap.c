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

//hosszabb valtozat
//void up(heap* h, int i) {
//    int seged;
//    while ((i > 1) && (h->data[i / 2].price < h->data[i].price)) {
//        seged = h->data[i / 2].year;
//        h->data[i / 2].year = h->data[i].year;
//        h->data[i].year = seged;
//
//        seged = h->data[i / 2].month;
//        h->data[i / 2].month = h->data[i].month;
//        h->data[i].month = seged;
//
//        seged = h->data[i / 2].price;
//        h->data[i / 2].price = h->data[i].price;
//        h->data[i].price = seged;
//        i /= 2;
//    }
//}

void up(heap* h, int i) {
    euro seged;
    while ((i > 1) && (h->data[i / 2].price < h->data[i].price)) {
        seged = h->data[i / 2];
        h->data[i / 2] = h->data[i];
        h->data[i] = seged;
        i /= 2;
    }
}

void down(heap* h, int i) {
    while (2*i <= h->size) {
        int j = 2 * i;
        if (j < h->size && h->data[j].price < h->data[j+1].price)
            j++;
        if (h->data[j].price <= h->data[i].price) break;
        euro aux=h->data[i];
        h->data[i]=h->data[j];
        h->data[j]=aux;
        i = j;
    }
}

euro torolmax(heap *h) {
    euro seged = h->data[1];
    h->data[1] = h->data[h->size];
    h->data[h->size] = seged;
    h->size--;
    return seged;
}

void kupacrendez(heap *h, int N) {
    for (int i = N / 2; i >= 1; i--)
    {
        down(h, i);
    }
    for (int i = 1; i < N; i++)
    {
        torolmax(h);
        down(h, 1);
    }
}

