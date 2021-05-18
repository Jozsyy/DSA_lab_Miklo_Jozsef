#include "HashTable.h"


int main() {
    FILE *f=freopen("hash.txt","rt",stdin);
    if(!f){
        printf("Error:Canno't open file");
        return 0;
    }
    int m,n,aux;                //n=m=10
    scanf("%i%i",&m,&n);
    int *hashTable=createHashTable(m);
    for(int i=0;i<n;++i){
        scanf("%i",&aux);       //12 14 15 22 25 2 16 17 7 14
        insert(aux,hashTable,m);
    }
    for(int i=0;i<m;++i){
        printf("%i ",hashTable[i]);
    }
    printf("\nA 22-es elem a/az %i. pozicion van\n",search(22,hashTable,m)); //22-es elem keresese
    printf("%i\n",search(26,hashTable,m)); //26-os elem keresese(nincs)

    delete(14,hashTable,m);     //14-es elem torlese
    delete(2,hashTable,m);      //2-es elem torlese (nincs)

    for(int i=0;i<m;++i){
        printf("%i ",hashTable[i]);
    }
    free(hashTable);

    return 0;
}
