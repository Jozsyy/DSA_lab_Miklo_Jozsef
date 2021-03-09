#include <stdio.h>
#include "functions.h"


int main() {
    FILE *f=fopen("be.txt","r");
    CEG *a;
    int n;
    fscanf(f,"%i",&n);
    a=create(n);
    read_data(a,n,f);
    print_data(a,n);
    destroy(a);
    return 0;
}