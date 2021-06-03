//
// Created by Jozsi on 2021-06-03.
//

#include "stack.h"
STACK *create(int capacity) {
    STACK *myStack=(STACK*)malloc(sizeof(STACK*));
    if(!myStack)
    {
        printf("Error");
        return 0;
    }
    myStack->sp=-1;
    myStack->maxsize=capacity;
    myStack->items=(int*)malloc(myStack->maxsize*sizeof (int));
    if(!myStack->items)
    {
        printf("Error");
        return 0;
    }
    return myStack;
}

int isEmpty(STACK *myStack) {
    return myStack->sp==-1;
}
int isFull(STACK *myStack) {
    return myStack->sp==myStack->maxsize-1;
}

void push(STACK *myStack, int a) {
    myStack->sp++;
    myStack->items[myStack->sp]=a;
}

int pop(STACK *myStack) {
    int a;
    a=myStack->items[myStack->sp];
    myStack->sp--;
    return a;
}

int top(STACK *myStack) {
    int a;
    a=myStack->items[myStack->sp];
    return a;
}

void readFromFile(STACK *myStack, const char *fileName){
    FILE *f=fopen(fileName,"r");
    if(!f){
        printf("Error: Cannot open file: %s",fileName);
        return;
    }
    int x,i=0;
    while(fscanf(f,"%i",&x)!=EOF && i<5 && !isFull(myStack)){
        if(x<1900 || x>2000){
            ++i;
            continue;
        }
        push(myStack,x);
        fscanf(f,"%i%i",&x,&x);
    }
    fclose(f);

}

void statistic(STACK *myStack){
    int *a=(int*)calloc(10,sizeof(int));
    while(!isEmpty(myStack)){
        int x=pop(myStack);
        if(x<1910){
            ++a[0];
        }
        else if(x<1920){
            ++a[1];
        }
        else if(x<1930) {
            ++a[2];
        }
        else if(x<1940){
            ++a[3];
        }
        else if(x<1950){
            ++a[4];
        }
        else if(x<1960){
            ++a[5];
        }
        else if(x<1970){
            ++a[6];
        }
        else if(x<1980){
            ++a[7];
        }
        else if(x<1990){
            ++a[8];
        }
        else if(x<2000){
            ++a[9];
        }
    }
    printf("\n[");
    for(int i=0;i<9;++i){
        printf("%i,",a[i]);
    }
    printf("%i]",a[9]);
}
