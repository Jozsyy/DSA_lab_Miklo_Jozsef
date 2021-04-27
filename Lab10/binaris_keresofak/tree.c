//
// Created by Jozsi on 2021-04-27.
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

void inorder(root *tree){
    if(tree->left){
        inorder(tree->left);
    }
    printf("%3d",tree->data);
    if(tree->right){
        inorder(tree->right);
    }
}

