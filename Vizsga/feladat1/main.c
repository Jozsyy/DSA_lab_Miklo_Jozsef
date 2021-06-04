#include "stack.h"
#include "heap.h"

int year=2021;
int main() {
    STACK *verem=create(10);        ///letrehozunk egy vermet
    heap *h=createHeap(10);            ///letrehozunk egy kupacot
    readFromFile(verem,"people.txt");   ///a verembe beolvassuk az elemeket a megadott file-bol
    int c=0;        ///c egy szamlalo amivel szamoljuk, hogy hanyan szulettek 2000 elott
    while(!isEmpty(verem)){
        int x=pop(verem);       ///x valtozoba taroljuk az elemet amit kivettunk a verembol
        insert(h,x);            /// majd behelyezzuk a kupacba
        if(x<2000){
            ++c;
        }
    }
    printf("%i-en szulettek 2000 elott\n",c);
    kupacrendez(h,h->size);           ///a kupacot atrendezzuk, hogy a legkisebb elem legyen a kupac elso eleme
    int old=year-h->data[1];          ///kiszamitjuk a legidosebb szemely eletkorat majd kiirjuk
    printf("A legidosebb szemely eletkora: %i",old);
    return 0;
}
