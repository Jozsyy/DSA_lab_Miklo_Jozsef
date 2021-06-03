#include "linked_list.h"
int main() {
    List *list=NULL;
    char x[20];
    for(int i=0;i<5;++i){
        scanf("%s",x);
        insertToList(&list,x);  //Jozsi Miska Peter Kati Eri
    }
    printList(list);
    if(findItemInList("Jozsi",list)){
        printf("\nTalalt\n");
    }
    removeFromList(&list,"Kati");
    printList(list);
    destroyList(list);
    return 0;
}
