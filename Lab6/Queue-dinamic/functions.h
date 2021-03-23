//
// Created by Jozsi on 2021-03-23.
//

#ifndef QUEUE_DINAMIC_FUNCTIONS_H
#define QUEUE_DINAMIC_FUNCTIONS_H
#include <stdbool.h>

typedef struct NodeType
{
    int info;
    struct NodeType *next;
} NodeType;

struct NodeType* create();
bool isEmpty(struct NodeType *first);
void insert(struct NodeType **first,struct NodeType **last,int a);
int delete(struct NodeType **first);

#endif //QUEUE_DINAMIC_FUNCTIONS_H
