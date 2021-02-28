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

int pair(int *array,int n){
    int pair=0;
    for(int i=0;i<n;++i){
        if(*(array+i)%2==0){
            ++pair;
        }
    }
    return pair;
}

int impair(int *array,int n){
    int impair=0;
    for(int i=0;i<n;++i){
        if(*(array+i)%2!=0){
            ++impair;
        }
    }
    return impair;
}

int poz(int *array,int n){
    int poz=0;
    for(int i=0;i<n;++i){
        if(*(array+i)>0){
            ++poz;
        }
    }
    return poz;
}

int neg(int *array,int n){
    int neg=0;
    for(int i=0;i<n;++i){
        if(*(array+i)<0){
            ++neg;
        }
    }
    return neg;
}

void reverse(double *array,int n){
    for(int i=n-1;i>=0;--i){
        printf("%.2lf ",*(array+i));
    }
}


