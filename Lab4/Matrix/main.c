#include <stdio.h>
#include "functions.h"
#include <stdlib.h>

int main() {
    Matrix *array;
    readMatrix("be.txt",&array);
    printMatrix(array);
    //deleteRow(&array,2);
    //printMatrix(array);
    printf("%i",minimum(array));
    return 0;
}