//
// Created by Jozsi on 2021-06-04.
//

#include "heap.h"
heap *createHeap(int max) {
    heap* h = (heap*)malloc(sizeof(heap));          ///helyet foglalunk dinamikusan egy kupacnak
    if(h==NULL){                            ///ellenorizzuk, hogy sikeres volt-e a helyfoglalas
        printf("Could not allocate memory.\n");
        return NULL;
    }
    h->size = 0;
    h->maxSize = max;
    h->data = (int*)malloc(max * sizeof(int));      ///helyet foglalunk annyi elemnek amennyit kaptunk parameterkent (max)
    if(h->data==NULL){                                ///itt is ellenorizzuk
        printf("Could not allocate memory.\n");
        return NULL;
    }
    return h;                               ///visszateritjuk a heap tipusu valtozot
}

///behelyezunk egy ealemet a kupacba, majd ugy rendezzuk, hogy a legnagyobb elem legyen a legelso
void insert(heap* h, int data) {
    h->size++;
    h->data[h->size]=data;
    up(h, h->size);
}

///segedfuggveny az inserthez, hogy novekvo sorrend legyen
void up(heap* h, int i) {
    int seged;
    while ((i > 1) && (h->data[i/2] < h->data[i])) {
        seged = h->data[i/2];
        h->data[i/2] = h->data[i];
        h->data[i] = seged;
        i /= 2;
    }
}

///segedfuggveny a kupacrendezhez, hogy csokkeno sorrend legyen
void down(heap* h, int i) {
    while (2*i <= h->size) {
        int j = 2 * i;
        if (j < h->size && h->data[j] < h->data[j+1])
            j++;
        if (h->data[j] <= h->data[i]) break;
        int aux=h->data[i];
        h->data[i]=h->data[j];
        h->data[j]=aux;
        i = j;
    }
}

///fuggveny ami atrendezi csokkeno sorrendbe a kupacot
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

///segedfuggveny a kupacrendezeshez
int torolmax(heap *h) {
    int seged = h->data[1];
    h->data[1] = h->data[h->size];
    h->data[h->size] = seged;
    h->size--;
    return seged;
}
