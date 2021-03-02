//
// Created by Jozsi on 2021-03-02.
//

#ifndef FELADAT1_FUNCTIONS_H
#define FELADAT1_FUNCTIONS_H

typedef struct{

}CEG;

CEG* create(int n);     //helyfoglalas
void read_data(CEG* a,int n,FILE *f);   //beolvasas
void destroy(CEG* a,int n);    //helyfelszabaditas


#endif //FELADAT1_FUNCTIONS_H
