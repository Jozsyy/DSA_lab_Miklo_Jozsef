//
// Created by Jozsi on 2021-03-14.
//

#ifndef INTARRAY_FUNCTIONS_H
#define INTARRAY_FUNCTIONS_H

typedef struct {
    int size;
    int *elements;
} IntArray;

//tömb létrehozása
//calloc vagy malloc használata
IntArray* createArray(int dimension);

//tömb tartalmának beolvasása állományból
void readArray(const char *fileName, IntArray **array);

//tömb tartalmának véletlenszámokkal való feltöltése
void fillArray(int* array, int dimension, int first, int last);

//tömb tartalmának kiiratása a képernyőre
void printArray(IntArray* array);

//tömb tartalmának kiiratása állományba
void printArrayToFile(const char* fileName, IntArray *array);

//tömb rendezése tetszőleges algoritmussal
void sortArray(IntArray *array);

//egy adott elem keresése lineáris vagy bináris kereséssel
//a függvény pozíciót térítsen vissza, ha nincs benne az keresett elem, akkor -1 et
int findElement(IntArray *array, int element);

#endif //INTARRAY_FUNCTIONS_H
