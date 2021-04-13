//
// Created by Jozsi on 2021-04-13.
//

#ifndef GYAK_FELADATOK_TOMB_H
#define GYAK_FELADATOK_TOMB_H

typedef struct{
    int meret;
    int *szamok;
}IntArray;

IntArray* createArray(int size);
void feltoltes(IntArray **array);
void print(IntArray *array);

#endif //GYAK_FELADATOK_TOMB_H
