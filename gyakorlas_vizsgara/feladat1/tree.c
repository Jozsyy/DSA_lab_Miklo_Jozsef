//
// Created by Jozsi on 2021-06-02.
//

#include "tree.h"

root *create(int a){
    root *node=(root*)malloc(sizeof (root));
    if(!node){
        printf("Error:Couldn't allocate memory");
        return 0;
    }
    node->data=a;
    node->left=NULL;
    node->right=NULL;

    return node;
}

void insert(root **tree, int a){
    if((*tree)==NULL){
        (*tree)=create(a);
    }
    else{
        if((*tree)->data>a){
            insert(&((*tree)->left),a);
        }
        else{
            insert(&((*tree)->right),a);
        }
    }
}

void inorder(root *tree,int i,int n, int m){
    if(tree->left){
        ++i;
        inorder(tree->left,i,n,m);
    }
    if(i>=n && i<=m) {
        printf("%3d", tree->data);
    }
    if(tree->right){
        ++i;
        inorder(tree->right,i,n,m);
    }
}

void elozo(root *tree,int elobbi,int keresett){
    if(tree->left){
        elozo(tree->left,tree->data,keresett);
    }
    if(keresett==tree->data) {
        printf("\n%d", elobbi);
    }
    if(tree->right){
        elozo(tree->right,tree->data,keresett);
    }
}
