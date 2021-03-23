#include <stdio.h>
#include "functions.h"

int main() {

    QUEUE *myQueue;
    myQueue=create(10);
    int op;

    do{
        printf("1-uj elem beivitele\n2-elem kitorlese\n3-elso elem visszateritese\n4-kilepes\n");
        do{
            printf("Options: ");
            scanf("%i",&op);
        }while(op>0 && op>5);


        int new;
        switch (op) {
            case 1:

                printf("Add meg az uj elemet");
                scanf("%i",&new);
                put(myQueue,new);
                break;
            case 2:
                get(myQueue);
                break;
            case 3:
                printf("\n%i",frontElement(myQueue));
        }
    }while(op != 4);
    return 0;
}
