#include <stdio.h>
#include "functions.h"

int main() {
    int x,k,number;
    Digit *array;

    printf("number=");
    scanf("%i",&number);

    Input(&array,number);

    do{
        printf("x=");
        scanf("%i",&x);
        switch(x){
            case 1: Print(array); break;
            case 2:
                printf("k=");
                scanf("%i",&k);
                printf("%i\n",Digit_k(array,k));
                break;
            case 3:
                printf("%i ",SizeDigit(array));
            case 4:
                if(asc(array)){
                    Print(array);
                }
                else{
                    printf("The array isn't ascendig!\n");
                }
                break;
            case 5:
                Destroy(array);
                break;
        }
    }while(x!=0);
    return 0;
}
