//
// Created by Jozsi on 2021-03-30.
//

#ifndef FELADAT1_FUNCTIONS_H
#define FELADAT1_FUNCTIONS_H
#include <stdbool.h>

typedef struct{
    int vdig;   //maga a szamjegy
    int cdig;   //a szamjegy elofordulasanak a szama
}Dig;

typedef struct Digit {
    int nrdigit;
    Dig* digits;
}Digit;
//Digit típus létrehozása
Digit* Create(int capacity);
//Digit típus felszabadítása
void Destroy(Digit* array);
//Tömb feltöltése
void Input(Digit** array, int number);
//k. számjegy lekérdezése
int Digit_k(Digit* array, int k);
//számjegyek számának lekérdezése
int SizeDigit(Digit* array);
//IntArray típus kiiratása
void Print(Digit* array);

bool asc(Digit* array);
#endif //FELADAT1_FUNCTIONS_H
