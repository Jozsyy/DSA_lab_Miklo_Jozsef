//
// Created by Jozsi on 2021-03-22.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void zarojelezes(const char *fileName, STACK *v) {
    FILE *f=fopen(fileName,"rt");
    if(!f){
        printf("Error:Canno't open file:%s\n",fileName);
        return;
    }
    char s[50];
    int n=0;
    while(fscanf(f, "%[^\n]\n", s)!=EOF){
        ++n;
        for(int i=0;i<strlen(s);++i){
            if (strchr("()", s[i]) != NULL) {
                if (s[i]== '(' && isFull(v) != 1) {
                    push(v, n);
                } else if (isEmpty(v) != 1) {
                    printf("%i,%i; ",pop(v),n);
                } else {
                    printf("Nem talalhato a nyitott zarojel a zarthoz.Valoszinuleg tobb zart zarojel van\n");
                    return;
                }
            }
        }
    }
    if(isEmpty(v)){
        printf("A kifejezesben egyenloen szerepelnek nyitott es zart zarojelek\n");
    }
    else{
        printf("A kifejezesben tobb nyitott zarojel van\n");
    }
}
