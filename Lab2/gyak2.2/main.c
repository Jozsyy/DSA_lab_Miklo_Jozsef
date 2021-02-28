#include <stdio.h>
#include "function.h"
int main() {
    int a[]={5,-3,0,-1,9,15},n=6,value=15;
    if(linear_search(a,n,value)!=-1){
        printf("\nA tombben a %i a/az %i pozicion talalhato", value, linear_search(a, n, value));
    }
    else{
        printf("\nA tombben a %i elem nem talalhato",value);
    }
    return 0;
}
/**
 * Algoritmus elemzes-futasi ido
 * Linearis kereses-linear_search           Koltseg             Vegrehajtasi szam
 *for(int i=0;i<n;++i){                     c1                      n+1
        if(*(array+i)==value){              c2                      n
            return i;                       0                       1
        }
    }
    return -1;                              0                       1
    Osszesen:                               C                       2*n+3

*/