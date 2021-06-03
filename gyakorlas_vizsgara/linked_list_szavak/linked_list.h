//
// Created by Jozsi on 2021-06-03.
//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#ifndef LINKED_LIST_SZAVAK_LINKED_LIST_H
#define LINKED_LIST_SZAVAK_LINKED_LIST_H

typedef struct {
    char adat[10];
    struct List* next;
}List;

List* createList();
void insertToList(List** front,char* szo);
void removeFromList(List **front,char* szo);
void destroyList(List* front);
void printList(List *front);
bool findItemInList(char* szo,List *front);

#endif //LINKED_LIST_SZAVAK_LINKED_LIST_H
