//
// Created by Jozsi on 2021-03-14.
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

IntArray* createArray(int dimension){
    IntArray *array=(IntArray*)malloc(sizeof(IntArray));
    if(array==NULL){
        printf("Couldn't allocate memory.\n");
        return NULL;
    }
    array->size=dimension;
    array->elements=(int*)malloc(array->size*sizeof(int));

    if (array->elements == NULL) {
        printf("Could not allocate memory.\n");
        free(array);
        return NULL;
    }

    return array;
}

void readArray(const char *fileName, IntArray **array){
    FILE *f=fopen(fileName,"rt");
    if(!f){
        printf("Error: Canno't open file:%s\n",fileName);
        return;
    }
    int n;
    fscanf(f, "%i", &n);
    IntArray *tempA = createArray(n);
    if (tempA == NULL) {
        fclose(f);
        return;
    }

    for (int i = 0; i < tempA->size; i++) {
        fscanf(f, "%i", &tempA->elements[i]);
    }

    (*array) = tempA;

    fclose(f);
}

void fillArray(int* array, int dimension, int first, int last){
    srand(time(0));
    for(int i=0;i<dimension;++i){
        array[i]=rand()%last-first+1;
    }
}

void printArray(IntArray* array) {
    for (int i = 0; i < array->size; i++) {
        printf("%d ", array->elements[i]);
    }
}

void printArrayToFile(const char *fileName, IntArray *array) {
    FILE *g=fopen(fileName,"wt");
    if(!g){
        printf("Error: Canno't open file: %s\n",fileName);
        fclose(g);
        return;
    }
    for(int i=0;i<array->size;++i){
        fprintf(g,"%i ",array->elements[i]);
        //free(array->elements[i]);
    }
    //free(array->size);
    fclose(g);

}

void sortArray(IntArray *array){
    for(int i=0;i<array->size-1;++i){
        for(int j=i+1;j<array->size;++j){
            if(array->elements[i]>array->elements[j]){
                int aux=array->elements[i];
                array->elements[i]=array->elements[j];
                array->elements[j]=aux;
            }
        }
    }
}

int findElement(IntArray *array, int element){
    for(int i=0;i<array->size;++i){
        if(array->elements[i]==element){
            return i;
        }
    }
    return -1;
}
