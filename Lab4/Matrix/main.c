#include <stdio.h>
#include "functions.h"
#include <stdlib.h>

int main() {
    Matrix *array;
    readMatrix("be.txt",&array);
    printMatrix(array);
    return 0;
}
