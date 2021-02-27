//
// Created by Jozsi on 2021-02-23.
//

#include "function.h"

int max(int a, int b, int c) {
    if(a>b){
        if(a>c){
            return a;
        }
        else {
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}

int min(int a, int b, int c) {
    if(a<b){
        if(a<c){
            return a;
        }
        else {
            return c;
        }
    }
    else{
        if(b<c){
            return b;
        }
        else{
            return c;
        }
    }

}

double sum(double *array,int n){
    double sum=0;
    for(int i=0;i<n;++i){
        sum+=array[i];
    }
    return sum;
}

double product(double *array,int n){
    double p=1;
    for(int i=0;i<n;++i){
        p*=array[i];
    }
    return p;
}

double avarge(double *array,int n){
    return sum(array,n)/n;
}

