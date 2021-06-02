#include "tree.h"

int main() {
    root *tree;
    tree=NULL;
    int x,n,m;
    scanf("%i%i",&n,&m);
    for(int i=0;i<5;++i){
        scanf("%i",&x);
        insert(&tree,x);
    }
    inorder(tree,0,n,m);    //kiirjuk az n..m szint kozotti kulcsokat
    elozo(tree,0,3);    //kiirjuk a keresett elem elozojet(ami novekvo sorba elotte all
    return 0;
}
