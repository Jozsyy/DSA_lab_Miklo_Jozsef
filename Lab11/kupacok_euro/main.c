#include "heap.h"
#include "linked_list.h"

int main() {
    int x;
    FILE *f=fopen("euro.txt","rt");
    if(!f){
        printf("Error!");
    }
    fscanf(f,"%i",&x);
    heap *h=createHeap(x);
    int year,month,price;
    for(int i=0;i<x;++i){
        fscanf(f,"%i",&year);
        fscanf(f,"%i",&month);
        fscanf(f,"%i",&price);
        insert(h,year,month,price);
    }
    fclose(f);
    int forint=h->data[1].price/100;
    int filler=h->data[1].price%100;

    printf("%i.",h->data[1].year);
    int y=h->data[1].month;
    switch (y) {
        case 1:printf("januar");break;
        case 2:printf("februar");break;
        case 3:printf("marcius");break;
        case 4:printf("aprilis");break;
        case 5:printf("majus");break;
        case 6:printf("junius");break;
        case 7:printf("julius");break;
        case 8:printf("augusztus");break;
        case 9:printf("szeptember");break;
        case 10:printf("oktober");break;
        case 11:printf("november");break;
        case 12:printf("december");break;
        default:printf("\nNincs ilyen honap:%i\n",y);
    }
    printf(": %i forint %i filler\n",forint,filler);


    /**
     * +feladat
     * kiirjuk a kupacot (legnagyobb ertek van az elejen-csokkeno sorrend)
     * majd atrendezzuk (kupacrendes fuggvennyel)-legkisebb elem az elejen(novekvo sorrend)
     */
    printf("\n\n");
    for(int i=1;i<=h->size;++i){
        printf("%i, %i, %i\t\t",h->data[i].year,h->data[i].month,h->data[i].price);
    }

    kupacrendez(h,x);
    h->size=x;

    printf("\n\n");
    for(int i=1;i<=h->size;++i){
        printf("%i, %i, %i\t\t",h->data[i].year,h->data[i].month,h->data[i].price);
    }
///probalkozas linked_listel
//    int x;
//    FILE *f=fopen("euro.txt","rt");
//    if(!f){
//        printf("Error!");
//    }
//    fscanf(f,"%i",&x);
//    NodeType *list=createList();
//    int year,month,price;
//    for(int i=0;i<x;++i){
//        fscanf(f,"%i",&year);
//        fscanf(f,"%i",&month);
//        fscanf(f,"%i",&price);
//        insertList(&list,year,month,price);
//    }
//    fclose(f);
//    printMaxPrice(list);
    return 0;
}
