//
// Created by Jozsi on 2021-03-15.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int* createArray(int n){
    int *a=(int*)malloc(n*sizeof(int));
    if(!a){
        printf("Error: Couldn't allocate memory.\n");
        return NULL;
    }
    return a;
}

void egyesites(Halmaz A, Halmaz B){
    Halmaz C;
    C.S=createArray(A.db + B.db);
    int i,j,n;
    i=j=n=0;
    while(i<A.db  && j<B.db){
        if(A.S[i] < B.S[j]){
            C.S[n++]=A.S[i++];
        }
        else if(A.S[i] > B.S[j]){
            C.S[n++]=B.S[j++];
            }
            else{
            C.S[n]=B.S[j];
                ++n,++i,++j;
            }
    }
    while(i<A.db){
        C.S[n]=A.S[i];
        ++n,++i;
    }
    while(j<B.db ){
        C.S[n]=B.S[j];
        ++n,++j;
    }

    C.db=n;
    for(i=0; i < C.db; ++i){
        printf("%i ", C.S[i]);
    }

}

void metszet(Halmaz A, Halmaz B){
    Halmaz C;
    C.S=createArray(A.db);
    int i,j,n;
    i=j=n=0;
    while(i < A.db || j < B.db){
        if(A.S[i] < B.S[j]){
            ++i;
        }
        else if(A.S[i] > B.S[j]){
            ++j;
        }
        else{
            C.S[n++]=A.S[i];
            ++i,++j;
        }
    }
    C.db=n;
    for(i=0; i < C.db; ++i){
        printf("%i ", C.S[i]);
    }

}

void kulonbseg(Halmaz A, Halmaz B){
    Halmaz C;
    C.S=createArray(A.db);
    int i,j,n;
    i=j=n=0;
    while(i < A.db || j < B.db){
        if(A.S[i] < B.S[j]){
            C.S[n++]=A.S[i++];
        }
        else if(A.S[i] > B.S[j]){
            ++j;
        }
        else{
            ++i,++j;
        }
    }
    C.db=n;
    for(i=0; i < C.db; ++i){
        printf("%i ", C.S[i]);
    }
}