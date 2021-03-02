//
// Created by Jozsi on 2021-03-02.
//

#include "functions.h"

void time(int sec){
    int h=0,m=0;
    if(sec>=3600){
        h=sec/3600;
        sec-=h*3600;
    }
    if(sec>=60){
        m=sec/60;
        sec-=m*60;
    }
    printf("%i:%i:%i",h,m,sec);
}