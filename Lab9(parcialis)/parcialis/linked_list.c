//
// Created by Jozsi on 2021-04-20.
//

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * NodeType tipusu fuggveny, aminek nincs parametere
 * Dinamikusan helyet foglalunk egy csomopontnak, majd ellenorizzuk,hogy sikerult-e a helyfoglalas
 * next-et NULL-ra allitjuk, mivel nem kovetkezik utana mas csomopont
 * visszateritjuk a csomopontot
 */
NodeType* createList(){
    struct NodeType *newNode;
    newNode=(struct NodeType*)malloc(sizeof (struct NodeType*));
    if(!newNode){
        printf("Error!");
        return 0;
    }
    newNode->next=NULL;
    return newNode;
}


/**
 * void tipusu fuggveny ami megkapja parameterekent a listat (cim szerinti parameter atadas), es egy int tipusu valtozot
 * Helyet foglalunk egy uj csomopontnak
 * az infoba bemasoljuk a kapott parametert
 * megnezzuk, hogy ures-e a lista, ha igen akkor ez a csomopontja lesz az elso, ha nem akkor a vegere rakjuk
 */
void insertList(struct NodeType** first, int a) {
    NodeType* newNode = createList();
    newNode->info = a;
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

/**
 * void tipusu fuggveny aminek 2 parametere van:a lista; const char tipusu valtozo, ami az allomanynevet tartalmazza
 * megnyitjuk a kimeneti allomanyt irasra, ellenorizzuk, hogy sikerult-e
 * ameddig a lista nem ures addig kiirjuk belole a szamokat es leptetjuk a next-et a kovetkezore
 * bezarjuk az allomanyt
 */
void printList(struct NodeType *first,const char *fileName) {
    FILE *g=fopen(fileName,"wt");
    if(!g){
        printf("Hiba az allomanynal!");
        return;
    }
    struct NodeType *p = first;
    while (p != NULL) {
        fprintf(g,"%i  ", p->info);
        p = p->next;//elore lepek egyet

    }
    fclose(g);
}

//felszabaditjuk a lista mezojeit, majd magat a listat
void destroyList(struct NodeType *first){
    free(first->info);
    free(first->next);
    free(first);
}
