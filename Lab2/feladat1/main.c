#include <stdio.h>
#include "function.h"

int main() {
    //1.feladat
    printf("Legnagyobb szam:%i\n",max(2,6,10));
    printf("Legkisebb szam:%i\n",min(2,6,10));
    //2.feladat
    double a[]={5.2,6.4,10.6,8,4};
    int n=5;
    printf("A tomb elemeinek osszege:%.2lf\n",sum(a,n));
    printf("A tomb elemeinek szorzata:%.2lf\n",product(a,n));
    printf("A tomb elemeinek atlaga:%.2lf\n",avarge(a,n));
    //3.feladat
    int b[]={5,-3,0,-1,9,15},m=6;
    printf("A tombben talalhato paros elemek szama:%i\n",pair(b,m));
    printf("A tombben talalhato paratlan elemek szama:%i\n",impair(b,m));
    printf("A tombben talalhato pozitiv elemek szama:%i\n",poz(b,m));
    printf("A tombben talalhato negatov elemek szama:%i\n",neg(b,m));
    //4.feladat
    printf("A valos tomb forditott sorrendben:");
    reverse(a,n);
    return 0;
}

