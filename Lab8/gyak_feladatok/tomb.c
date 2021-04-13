//
// Created by Jozsi on 2021-04-13.
//

#include "tomb.h"
#include <stdio.h>
#include <stdlib.h>

IntArray* createArray(int size) {
    IntArray *array = (IntArray *) malloc(sizeof(IntArray));

    if (array == NULL) {
        printf("Could not allocate memory.\n");
        return NULL;
    }

    array->meret = size;
    array->szamok= (int *) malloc(array->meret * sizeof(int));

    if (array->szamok == NULL) {
        printf("Could not allocate memory.\n");
        free(array);
        return NULL;
    }

    return array;
}

void feltoltes(IntArray **array){
    IntArray *tempA=createArray(20);
    int n=0;
    for(int i=0;i<20;++i){
        tempA->szamok[i]=n;
        n=n+2;
    }
    (*array)=tempA;
}

void print(IntArray *array){
    for(int i=0;i<array->meret;++i){
        printf("%i ",array->szamok[i]);
    }
}
