#include <stdio.h>
#include "queue.h"
#include "linked_list.h"

int main() {
//    char s[10];
//    scanf("%s",s);
//    QUEUE *sor=create(10);  //max 10 karakterbol all
//    for(int i=0;i<strlen(s);++i){
//        insert(sor,s[i]);
//    }
//    print(sor,"maganhangzok.txt","massalhangzok.txt");
//    destroy(sor);

    int a;
    scanf("%i",&a);
    NodeType *lista=createList(10); //max 10 szamjegyu szam
    while(a!=0){
        int aux=a%10;
        insertList(&lista,aux);
        a/=10;
    }
    printList(lista,"ki.txt");
    destroy(lista);
    return 0;
}
