//
// Created by Jozsi on 2021-02-28.
//

#include "function.h"

int linear_search(int *array, int n, int value) {
    for(int i=0;i<n;++i){
        if(*(array+i)==value){
            return i;
        }
    }
    return -1;
}
