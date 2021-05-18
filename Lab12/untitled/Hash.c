//
// Created by Jozsi on 2021-05-18.
//

#include "Hash.h"

int* createHashTable(int m){
    int *table=(int*)malloc(m*sizeof(int));
    if(table==NULL){
        printf("Error: Canno't allocate memory\n");
        return NULL;
    }
    for(int i=0;i<m;++i){
        table[i]=-1;
    }
    return table;
}

int search(char *szo, int *t, int m){
    int k;
    for(int i=0;i<strlen(szo);++i){
        k+=szo[i];
    }
    int j,i=0;
    do
    {
        j=(k+i) % m;
        if (t[j]==k)
            return j; // visszaadja a megtalalt elem indexet
        else i++;
    }
    while ((t[j]!=-1) && (i!=m));
    return -1; // ha nincs benne a keresett elem
}

void insert(char *szo, int *t, int m){
    int k;
    for(int i=0;i<strlen(szo);++i){
        k+=szo[i];
    }
    int j,i=0;
    do
    {
        j=(k+i) % m;
        if (t[j]==-1)
        {
            t[j]=k;
            return;
        }
        else i++;
    }
    while (i!=m);
    printf( "Tulcsodulas\n");
    return;
}

void delete(int k, int *t, int m){
    int j,i=0;
    do
    {
        j=(k+i) % m;
        if (t[j]==k)
        { t[j]=-1; return; }
        else i++;
    }
    while ((t[j]!=-1) && (i!=m));
    printf("Hianyzo elem\n");
}
