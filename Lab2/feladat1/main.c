#include <stdio.h>
#include "function.h"

int main() {
    double a[]={5.2,6.4,10.6,8,4};
    int n=5;
    printf("Legnagyobb szam:%i\n",max(2,6,10));
    printf("Legkisebb szam:%i\n",min(2,6,10));
    printf("A tomb elemeinek osszege:%.2lf\n",sum(a,n));
    printf("A tomb elemeinek szorzata:%.2lf\n",product(a,n));
    printf("A tomb elemeinek atlaga:%.2lf",avarge(a,n));

    return 0;
}
