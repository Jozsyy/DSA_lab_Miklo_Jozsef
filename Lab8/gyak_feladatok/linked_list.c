//
// Created by Jozsi on 2021-04-13.
//

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node* create() {
    Node* newNode = (Node*)calloc(1, sizeof(Node));

    if(!newNode) {
        printf("Error while allocating newNode!");
        return NULL;
    }

    newNode->next = NULL;

    return newNode;
}

void insert(Node** front, char *nev, int data) {
    Node* newNode = create();
    newNode->data = data;
    strcpy(newNode->nev,nev);

    if(front == NULL ) {
        newNode->next = (struct Node *) *front;
        *front = newNode;
    } else {
        Node* p = *front;
        int i = 1;

        while(p->next != NULL) {
            p = (Node *) p->next;
            i++;
        }

        newNode->next = p->next;
        p->next = (struct Node *) newNode;
    }
}

void remove_node(Node *front){
    if(front != NULL){
         Node *p=front;
         front=front->next;
         destroy(p);
    }
    else{
        printf("A sor ures\n");
    }
}

void destroy(Node* front) {
    if(front->next)
        destroy((Node *) front->next);

    free(front);
    front = NULL;
}

void read(const char *fileName,Node *myNode){
    FILE *f=fopen(fileName,"rt");
    if(!f){
        printf("Error:Cannot open file:%s\n",fileName);
        return;
    }
    char nev[25];
    int x;

    while(fscanf(f,"%s",nev)!=EOF){
        fscanf(f,"%i\n",&x);
        insert(&myNode,nev,x);
    }
    fclose(f);
}

void print_list(Node *myNode){
    while(myNode!=NULL){
        printf("%s-%i",myNode->nev,myNode->data);
        remove_node(myNode);
    }
}