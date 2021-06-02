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
    printf("Inorder:");
    inorder(tree);
    printf("\nPreorder:");
    preorder(tree);
    printf("\nPostorder:");
    postorder(tree);
    if(find(tree,12)){
        printf("\nTalalt");
    }
    else{
        printf("\nNem talalt");
    }
    destroy(&tree);
    return 0;
}
