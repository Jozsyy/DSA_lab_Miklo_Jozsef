//
// Created by Jozsi on 2021-06-04.
//

#include "stack.h"

STACK *create(int capacity) {
    STACK *myStack=(STACK*)malloc(sizeof(STACK*)); ///helyet foglalunk egy veremnek
    if(!myStack)        ///ellenorizzuk, hogy sikeres volt-e a helyfoglalas
    {
        printf("Error");
        return 0;
    }
    myStack->sp=-1;
    myStack->maxsize=capacity;      ///max kapacitasnak helyet foglalunk
    myStack->items=(int*)malloc(myStack->maxsize*sizeof (int));
    if(!myStack->items)             ///ellenorizzuk, hogy sikeres volt-e a helyfoglalas
    {
        printf("Error");
        return 0;
    }
    return myStack;
}
///ellenorizzuk, hogy a verem ures
///1-et teritunk vissza ha ures es 0-at ha nem
int isEmpty(STACK *myStack) {
    return myStack->sp==-1;
}

///ellenorizzuk, hogy a verem tele van-e
///1-et teritunk vissza ha tele van es 0-at ha nem
int isFull(STACK *myStack) {
    return myStack->sp==myStack->maxsize-1;
}

///hozzaadunk egy elemet a veremhez
void push(STACK *myStack, int a) {
    myStack->sp++;
    myStack->items[myStack->sp]=a;
}

///kiveszunk egy elemet a verembol es visszateritjuk az erteket
int pop(STACK *myStack) {
    int a;
    a=myStack->items[myStack->sp];
    myStack->sp--;
    return a;
}

void readFromFile(STACK *myStack, const char *fileName){
    FILE *f=fopen(fileName,"r");    ///megnyitjuk az allomanyt olvasasra
    if(!f){                          ///ellenorizzuk, hogy sikeresen megtudtuk nyitni a bemeneti allomanyt
        printf("Error: Cannot open file: %s",fileName);
        return;
    }
    char x,y1,y2,z[10];
    int year=0;
    while(fscanf(f,"%c",&x)!=EOF){      ///1. szamjegyet beolvassuk az x-be

        fscanf(f,"%c",&y1);            ///y1 es y2 beolvassuk a 2. es 3. szamjegyet amit majd egesz szamma alakitunk
        fscanf(f,"%c",&y2);             ///annak megfeleloen,hogy mennyi az 1. szamjegy(x)

        if(strchr("12",x)!=NULL){       ///ha az elso szamjegy 1 vagy 2 akkor 1900-as ev
            year=10*(y1-'0')+y2-'0';        ///ha kivonjuk a karakterbol a '0' karaktert akkor megkapjuk magat a szamjegyet
            year=1900+year;
        }

        if(strchr("56",x)!=NULL){       ///ha az elso szamjegy 5 vagy 6 akkor 2000-es ev
            year=10*(y1-'0')+y2-'0';
            year=2000+year;
        }

        if(!isFull(myStack)){           ///ha a verem nincs tele akkor behelyezzuk a kovetkezo elemet az evet a tetejere
            push(myStack,year);
        }

        fscanf(f,"%[^\n]\n",z);     ///a z-be beolvassuk a tobbi szamjegyet
    }
    fclose(f);                          ///bezarjuk az allomanyt
}