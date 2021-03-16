#include <stdio.h>
#include "functions.h"

int main() {
    STACK *myStack;
    myStack = create(10);
    for (int i = 1; i <= 10; i++) {

        if (!isFull(myStack)) {
            push(myStack, i);
        } else {
            printf("nincs hely");

        }
    }
    while(!isEmpty(myStack))
    {

        printf("%i ",pop(myStack));
    }

    return 0;
}
