//
// Created by Jozsi on 2021-03-30.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

Digit* Create(int capacity) {
    Digit *number = (Digit *) malloc(sizeof(Digit));

    if (number == NULL) {
        printf("Could not allocate memory.\n");
        return NULL;
    }

    number->nrdigit = capacity;
    number->digits = (Dig *) malloc(number->nrdigit * sizeof(Dig));

    for(int i=0;i<capacity;++i){
        number->digits[i].cdig=0;
    }

    return number;
}

void Destroy(Digit* array){
    free(array->digits);
    free(array);
}

int init(Digit* array, int digit){
    for(int i=0;i<array->nrdigit;++i){
        if(digit == array->digits[i].vdig){
            return i;
        }
    }
    return -1;
}

void Input(Digit** array, int number){
    Digit* tmp;
    tmp=Create(10);
    tmp->nrdigit=0;

    while(number!=0){
        if(init(tmp,number%10)!=-1){
            tmp->digits[init(tmp,number%10)].cdig++;
        }
        else{
            tmp->nrdigit++;
            tmp->digits[tmp->nrdigit-1].cdig=1;
            tmp->digits[tmp->nrdigit-1].vdig=number%10;
        }

        number/=10;
    }
    *array=tmp;
}

int Digit_k(Digit* array, int k){
    if(k <= array->nrdigit)
        return array->digits[array->nrdigit-k].vdig;
    else
        return 0;
}

int SizeDigit(Digit* array){
    return array->nrdigit;
}

void Print(Digit* array){
    for(int i=array->nrdigit-1;i>=0;--i){
       printf("%i : %i \n",array->digits[i].vdig,array->digits[i].cdig);
    }
}

bool asc(Digit* array){
    for(int i=array->nrdigit-2;i>=0;--i){
        if(array->digits[i+1].vdig<array->digits[i].vdig){
            return false;
        }
    }
    return true;
}
