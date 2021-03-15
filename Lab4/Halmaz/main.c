#include <stdio.h>
#include "functions.h"

int main() {
    FILE *f=fopen("in.txt","rt");
    if(!f){
        printf("Error:Cannot open file!");
        return 0;
    }
    Halmaz A,B;
    fscanf(f,"%i%i",&A.db,&B.db);
    A.S=createArray(A.db);
    B.S=createArray(B.db);
    for(int i=0;i<A.db;++i){
        fscanf(f,"%i",&A.S[i]);
    }
    for(int i=0;i<B.db;++i){
        fscanf(f,"%i",&B.S[i]);
    }
    fclose(f);
    printf("A es B egyesitese:");
    egyesites(A, B);
    printf("\nA es B metszete:");
    metszet(A,B);
    printf("\nA - B:");
    kulonbseg(A,B); //=A\B
    printf("\nB - A:");
    kulonbseg(B,A); //A\B
    return 0;
}
