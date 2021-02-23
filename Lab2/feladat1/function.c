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
