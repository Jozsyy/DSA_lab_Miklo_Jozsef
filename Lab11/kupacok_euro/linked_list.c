//
// Created by Jozsi on 2021-05-11.
//

#include "linked_list.h"

NodeType* createList(){
    struct NodeType *newNode;
    newNode=(NodeType*)malloc(sizeof (NodeType));
    if(!newNode){
        printf("Error!");
        return 0;
    }
    newNode->next=NULL;
    return newNode;
}

void insertList(struct NodeType** first, int year,int month, int price) {
    NodeType* newNode = createList();
    newNode->data.year = year;
    newNode->data.month = month;
    newNode->data.price = price;
    if(*first == NULL) {
        *first=newNode;
    } else {
        NodeType* p = *first;
        int i = 1;

        while(p->next != NULL) {
            p = (NodeType *) p->next;
            i++;
        }

        newNode->next = p->next;
        p->next = (NodeType *) newNode;
    }
}

void printMaxPrice(NodeType *first){
    int max=first->data.price;
    printf("%i\n",max);
    NodeType *now=createList();
    now->data=first->data;
    now->next=first->next;
    while(1){
        if(max<now->data.price){
            max=now->data.price;
        }
        if(now->next==NULL){
            break;
        }
        now=now->next;
    }
    printf("Max:%i",max);
}
