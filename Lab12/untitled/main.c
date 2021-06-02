#include "Hash.h"

int main() {
    int m,n;
    char aux[25];
    scanf("%i%i",&m,&n);
    int *hashTable=createHashTable(m);
    for(int i=0;i<n;++i){
        scanf("%s",aux);
        insert(aux, hashTable, m);
    }
    for(int i=0;i<m;++i){
        printf("%i ",hashTable[i]);
    }

    printf("\n%i\n",search("John",hashTable,m));

    delete("John",hashTable,m);
    for(int i=0;i<m;++i){
        printf("%i ",hashTable[i]);
    }
    free(hashTable);
}
