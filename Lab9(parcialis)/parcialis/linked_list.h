//
// Created by Jozsi on 2021-04-20.
//

#ifndef PARCIALIS_LINKED_LIST_H
#define PARCIALIS_LINKED_LIST_H


typedef struct NodeType
{
    int info;
    struct NodeType *next;
} NodeType;

NodeType* createList();
void insertList(struct NodeType **first,int a);
void printList(struct NodeType *firt,const char *fileName);
void destroyList(struct NodeType *first);

#endif //PARCIALIS_LINKED_LIST_H
