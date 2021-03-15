//
// Created by Jozsi on 2021-03-15.
//

#ifndef HALMAZ_FUNCTIONS_H
#define HALMAZ_FUNCTIONS_H

typedef struct
{
    int db;
    int *S;
}Halmaz;

//helyfoglalas a halmazban levo sornak
int* createArray(int n);

//2 halmaz egyesitese
void egyesites(Halmaz A, Halmaz B);

//2halmaz metszete
void metszet(Halmaz A, Halmaz B);

//2 halmaz kulonbsege
void kulonbseg(Halmaz A, Halmaz B);
#endif //HALMAZ_FUNCTIONS_H
