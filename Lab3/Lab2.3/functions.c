//
// Created by Jozsi on 2021-03-02.
//

#include "functions.h"
#include <math.h>
#include <stdio.h>
void result(int a,int b, int c){
    double delta,x1,x2;
    delta=b*b - 4*a*c;
    if(delta<0){
        printf("x1,x2 komplex szamok");
    }
    else{
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;
        printf("x1=%.2lf\tx2=%.2lf",x1,x2);
    }
}
