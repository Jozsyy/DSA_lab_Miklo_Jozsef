//
// Created by Jozsi on 2021-03-09.
//

#ifndef MATRIX_FUNCTIONS_H
#define MATRIX_FUNCTIONS_H

typedef struct  {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int **data;
}Matrix;

Matrix* createMatrix(int rows, int cols);

//tömb tartalmának beolvasása állományból
void readMatrix(const char *fileName, Matrix **array);


//tömb tartalmának kiiratása a képernyőre
void printMatrix(Matrix* array);

//töröl egy adott sort a matrixbol
//csökkenti a sorok számát, felszabaditja az utolso sort
void deleteRow(Matrix* matrix, int nr);

//visszatéríti a tömb legkisebb elemét
int minimum(Matrix* matrix);

#endif //MATRIX_FUNCTIONS_H
