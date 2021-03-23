#include <stdio.h>
#include "functions.h"

int main() {
    NodeType *first,*last;
    first=last=NULL;
    insert(&first,&last,5);
    printf("%i",first->info);
    return 0;
}
