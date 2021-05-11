//
// Created by Jozsi on 2021-05-11.
//
#include <stdlib.h>
#include <stdio.h>
#ifndef KUPACOK_EURO_LINKED_LIST_H
#define KUPACOK_EURO_LINKED_LIST_H

typedef struct euroList{
    int year,month,price;
}euroList;

typedef struct NodeType
{
    euroList data;
    struct NodeType *next;
} NodeType;

NodeType* createList();
void insertList(NodeType **first,int year,int month, int price);
void printMaxPrice(NodeType *first);

#endif //KUPACOK_EURO_LINKED_LIST_H
