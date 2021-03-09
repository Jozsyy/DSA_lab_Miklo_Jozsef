//
// Created by Jozsi on 2021-03-09.
//

#ifndef FELADAT1_FUNCTIONS_H
#define FELADAT1_FUNCTIONS_H
#include <stdio.h>

typedef struct {
    char liceum[20];
    double atlag;
}KOZEPFOK;

typedef struct {
    char intezmeny[20];
    char kar[10];
    double atlag;
}FELSOFOK;

typedef struct{
    char vnev[10];
    char knev[10];
    char vegzettseg[1]; //{N,K,F}
    KOZEPFOK kv;
    FELSOFOK ff;

}CEG;

CEG* create(int n);     //helyfoglalas
void read_data(CEG *a,int n,FILE *f);   //beolvasas
void print_data(CEG *a,int n);      //kiirja a 3 listat
void destroy(CEG *a);    //helyfelszabaditas


#endif //FELADAT1_FUNCTIONS_H
