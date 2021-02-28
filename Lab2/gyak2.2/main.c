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
