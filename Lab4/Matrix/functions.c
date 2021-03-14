//
// Created by Jozsi on 2021-03-09.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

Matrix* createMatrix(int rows, int cols){
    Matrix* array;
    array = (Matrix*)malloc(1 * sizeof(Matrix));
    if(!array)
    {
        printf("Hiba!");
        return 0;
    }

    array->rows = rows;
    array->cols = cols;

    array->data = (int**)malloc(rows * sizeof(int*));

    for(int i = 0; i <  rows; i++)
    {
        array->data[i] = (int*)malloc(cols * sizeof(int));
    }

    if(!array->data)
    {
        printf("Hiba!");
        return 0;
    }

    return array;

}

void readMatrix(const char *fileName, Matrix **array){
    FILE *f=fopen(fileName,"r");
    if(!f){
        printf("Hiba az allomany megnyitasakor");
        return;
    }
    Matrix* aux;
    int auxr,auxc;
    fscanf(f,"%i%i",&auxr,&auxc);
    aux=createMatrix(auxr, auxc);
    for(int i=0;i<auxr;++i){
        for(int j=0;j<auxc;++j){
            fscanf(f,"%i",&aux->data[i][j]);
        }
    }
    *array=aux;
}

void printMatrix(Matrix *array){
    for(int i=0;i<array->rows;++i){
        for(int j=0;j<array->cols;++j){
            printf("%i ", array->data[i][j]);
        }
        printf("\n");
    }
}

void deleteRow(Matrix* matrix, int nr) {
    if(nr>=matrix->rows || nr<0){
        printf("A matrixnak nincs olyan sora");
        return;
    }
    for(int i=nr;i<matrix->rows-1;++i){
        for(int j=0;j<matrix->cols;++j){
            matrix->data[i][j]=matrix->data[i+1][j];
        }
    }
    free(matrix->data[matrix->rows]);
    matrix->rows--;
}

int minimum(Matrix *matrix) {
    int minn=matrix->data[0][0];
    for(int i=0;i<matrix->rows;++i){
        for(int j=0;j<matrix->cols;++j){
            if(matrix->data[i][j]<minn){
                minn=matrix->data[i][j];
            }
        }
    }
    return minn;
}
