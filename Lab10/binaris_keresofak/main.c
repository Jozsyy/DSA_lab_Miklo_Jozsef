#include <stdio.h>
#include "tree.h"

int main() {
    root *tree;
    tree=create(0);
    tree=NULL;
    FILE *f=fopen("in.txt","r");
    int x;
    while(fscanf(f,"%d",&x)!=EOF){
        insert(&tree,x);
    }
    inorder(tree);
    
    return 0;
}
