//
// Created by Jozsi on 2021-03-23.
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

struct NodeType* create(){
    struct NodeType *newNode;
    newNode=(struct NodeType*)malloc(sizeof (struct NodeType*));
    if(!newNode){
        printf("Error!");
        return 0;
    }
    newNode->next=NULL;
    return newNode;
}

bool isEmpty(struct NodeType *first){
    if(first==NULL){
        return true;
    }
    return false;
}

void insert(struct NodeType **first,struct NodeType **last,int a){
    struct NodeType *newNode;
    newNode=create();
    newNode->info=a;
    if(isEmpty(*first)){
        (*first)=newNode;
        (*last)=newNode;
    }
    else{
        (*last)->next=newNode;
        (*last)=newNode;
    }

}

int delete(struct NodeType **first){
    struct NodeType *aux;
    if(!isEmpty(*first)){
        aux=(*first);
        int auxinfo=(*first)->info;
        (*first)=(*first)->next;
        free(aux);
        return auxinfo;
    }
    else{
        return INT_MIN;
    }

}