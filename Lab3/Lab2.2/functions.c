//
// Created by Jozsi on 2021-03-02.
//

#include "functions.h"
#include <math.h>
#include <stdio.h>

void distance(P a, P b) {
    double d;
    d=sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
    printf("%.2lf",d);
}
