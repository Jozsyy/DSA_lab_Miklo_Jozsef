//
// Created by Jozsi on 2021-06-03.
//

#include "linked_list.h"
List* createList() {
    List* newNode = (List*)calloc(1, sizeof(List));

    if(!newNode) {
        printf("Error while allocating newNode!");
        return NULL;
    }
    newNode->next=NULL;
    return newNode;
}

void insertToList(List** front,char *szo) {
    List* newNode = createList();
    strcpy(newNode->adat,szo);
    if(*front==NULL) {
        *front=newNode;
    } else {
        List* p = *front;
        int i = 1;

        while(p->next != NULL) {
            p = (List*) p->next;
            i++;
        }

        newNode->next = p->next;
        p->next = (List *) newNode;
    }
}

bool findItemInList(char *szo,List *front){
    while(front!=NULL){
        if(strcmp(front->adat,szo) == 0 ){
            return true;
        }
        front=front->next;
    }
    return false;
}

void printList(List *front){;
    printf("\nItems is List:\n");
    while(front!=NULL){
        printf("%s ",front->adat);
        front=front->next;
    }
}

void removeFromList(List **front, char *szo){
    List* temp = *front;
    List* prev = NULL;

    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && strcmp(temp->adat,szo)==0)
    {
        *front = temp->next; // Changed head
        free (temp);            // free old head
        return;
    }

        // Else Search for the key to be deleted,
        // keep track of the previous node as we
        // need to change 'prev->next' */
    else
    {
        while (temp != NULL && strcmp(temp->adat,szo)!=0)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = temp->next;

        // Free memory
        free(temp) ;
    }
}

void destroyList(List* front) {
    if(front->next != NULL)
        destroyList((List*) front->next);
    free(front);
    front = NULL;
}