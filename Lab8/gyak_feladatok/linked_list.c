//
// Created by Jozsi on 2021-04-13.
//

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node* createNode() {
    Node* newNode = (Node*)calloc(1, sizeof(Node));

    if(!newNode) {
        printf("Error while allocating newNode!");
        return NULL;
    }

    newNode->next = NULL;
//    newNode->data = NULL;
//    strcpy(newNode->nev,"");
    return newNode;
}

void insert(Node** front, char *nev, int data) {
    Node* newNode = createNode();
    newNode->data = data;
    strcpy(newNode->nev,nev);
    if(*front==NULL) {
        (*front)->data= newNode->data;
        strcpy((*front)->nev,newNode->nev);
        (*front)->next=NULL;
        printf("%s %i",(*front)->nev,(*front)->data);
    } else {
        printf("lol");
        Node* p = *front;
        int i = 1;

        while(p->next != NULL) {
            p = (Node *) p->next;
            i++;
        }

        newNode->next = p->next;
        p->next = (Node *) newNode;
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
        //printf("%s ",nev);
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