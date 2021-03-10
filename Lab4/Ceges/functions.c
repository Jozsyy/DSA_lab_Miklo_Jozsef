//
// Created by Jozsi on 2021-03-09.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>


CEG* create(int n){
    CEG *a=(CEG*)malloc(n*sizeof(CEG));
    if(!a){
        printf("Hiba");
        return 0;
    }
    return a;
}

void read_data(CEG* a,int n,FILE *f){
    if(!f){
        printf("Hiba!");
        return;
    }
    for(int i=0;i<n;++i){
        fscanf(f,"%s%s%s",a[i].vnev,a[i].knev,a[i].vegzettseg);
        if(a[i].vegzettseg[0]=='K'){
            fscanf(f,"%s%lf",a[i].kv.liceum,&a[i].kv.atlag);
        }
        else if(a[i].vegzettseg[0]=='F'){
            fscanf(f,"%s%s%lf",a[i].ff.intezmeny,a[i].ff.kar,&a[i].ff.atlag);
        }
    }
}

void print_data(CEG *a, int n) {
    printf("Vegzettseg nelkuliek:\n");
    for(int i=0;i<n;++i){
        if(a[i].vegzettseg[0]=='N') {
            printf("%s %s\n", a[i].vnev,a[i].knev);
        }
    }
    printf("Kozepfoku vegzettsegesek:\n");
    for(int i=0;i<n;++i){
        if(a[i].vegzettseg[0]=='K') {
            printf("%s %s: %s %.2lf\n", a[i].vnev,a[i].knev, a[i].kv.liceum, a[i].kv.atlag);
        }
    }
    printf("Felsofoku vegzettsegesek:\n");
    for(int i=0;i<n;++i){
        if(a[i].vegzettseg[0]=='F') {
            printf("%s %s: %s %s %.2lf\n", a[i].vnev,a[i].knev, a[i].ff.intezmeny, a[i].ff.kar,a[i].ff.atlag);
        }
    }

}

void destroy(CEG *a){
    free(a);
}
