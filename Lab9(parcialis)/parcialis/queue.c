//
// Created by Jozsi on 2021-04-20.
//

#include "queue.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * QUEUE tipusu fuggveny, ami megkapja a parameterkent a sor maximalis kapacitasat
 * Dinamikusan helyet foglalunk egy sornak, majd ellenorizzuk,hogy sikerult-e a helyfoglalas
 * front-ot es a rear-t -1-re allitjuk, mivel ez egy uj sor es ures
 * a sor maximalis kapacitasat egyenlitjuk a parameterrel
 * helyet foglalunk maxsize-nyi karakternek, majd ellenorizzuk
 * visszateritjuk a sort (QUEUE tipusu)
 */
QUEUE *create(int capacity) {
    QUEUE* myQueue;
    myQueue=(QUEUE*)malloc(sizeof(QUEUE));
    if(!myQueue){
        printf("Error: Couldn't allocate memory!");
        return NULL;
    }
    myQueue->front= -1;
    myQueue->rear= -1;
    myQueue->maxsize=capacity;

    myQueue->karakterek=(char*)malloc(myQueue->maxsize*sizeof(char));
    if(!myQueue->karakterek){
        printf("Error:Couldn't allocate memory!");
        return NULL;
    }
    return myQueue;
}

//visszaterit 1-et ha ures a sor, 0-ha nem
int isEmpty(QUEUE *myQueue){
    return (myQueue->rear == myQueue->front && myQueue->front==-1) || (myQueue->rear<myQueue->front);
}

//visszaterit 1-et ha tele van a sor, 0-ha nem
int isFull(QUEUE *myQueue){
    return myQueue->rear == myQueue->maxsize-1;
}

/**
 * char tipusu fuggveny aminek egy QUEUE tipusu paramtere van
 * egy segedvaltozoban eltaruljuk a sor elso karakteret(ha nem ures a sor), esa front-ot(a sorban levo elso karakter indexe) noveljuk
 * Visszeteritjuk a segedvaltozot
 */
char get(QUEUE *myQueue){
    char tmp;
    if(!isEmpty(myQueue)) {
        tmp=myQueue->karakterek[myQueue->front];
        myQueue->front++;
    }
    else{
        printf("Nincs mit kivenni a sorbol");
        return NULL;
    }
    return tmp;
}

/**
 * void tipusu fuggveny aminek 2 parametere van: QUEUE tipusu valtozo(a sor), char tipusu valtozo(karakter-hasznos informacio)
 * ha a sor nem ures es nincs tele akkor a rear(utolso karakter indexe)-t noveljuk es bemasoljuk a char tipusu parametert arra az indexre
 * ha a sor ures akkor noveljuk a rear-t, bemasoljuk a front index-re a parametert es noveljuk a front-ot(a sorban levo elso karakter indexe)
 */
void insert(QUEUE *myQueue,char a){
    if(!isFull(myQueue) && !isEmpty(myQueue)){
        myQueue->rear++;
        myQueue->karakterek[myQueue->rear]=a;
    }
    else if(!isFull(myQueue) && isEmpty(myQueue)){
        myQueue->rear++;
        myQueue->karakterek[myQueue->rear]=a;
        myQueue->front++;
    }
}

/**
 * void tipusu fuggveny aminek 3 parametere van: QUEUE tipusu sor; 2 const char tipusu valtozo, amik az allomanyneveket tartalmazzak
 * megnyitjuk a kimeneti allomanyokat irasra, ellenorizzuk, hogy sikerult-e
 * ameddig a sor nem ures addig kivesszuk belole a karaktereket es megvizsgaljuk, hogy magan/massalhangzo es az szerint kiirjuk a kimeneti allomanyokba
 * bezarjuk az allomanyokat
 */
void print(QUEUE *myQueue,const char *fileName1,const char *fileName2){
    FILE *g=fopen(fileName1,"wt");
    FILE *h=fopen(fileName2,"wt");
    if(!g || !h){
        printf("Hiba a kimeneti allomanynal!");
        return;
    }
    while(!isEmpty(myQueue)){
        char aux=get(myQueue);
        if(strchr("aeiouAEIOU",aux)!=NULL){
            fprintf(g,"%c ",aux);
        }
        else{
            fprintf(h,"%c ",aux);
        }
    }
    fclose(g);
    fclose(h);
}

//felszabaditjuk a sornak kulon minden mezejet, majd magat a sort
void destroy(QUEUE *myQueue){
    free(myQueue->maxsize);
    free(myQueue->front);
    free(myQueue->rear);
    free(myQueue->karakterek);
    free(myQueue);
}

