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

void preorder(root *tree)
{
    printf("%3d ", tree->data);
    if(tree->left)
        preorder(tree->left);
    if(tree->right)
        preorder(tree->right);
}

void postorder(root *tree)
{
    if(tree->left)
        postorder(tree->left);
    if(tree->right)
        postorder(tree->right);
    printf("%3d ", tree->data);
}

void destroy(root **tree)
{
    if((*tree) != NULL)
    {
        destroy(&((*tree)->left));
        destroy(&((*tree)->right));
        free((*tree));
        (*tree) = NULL;
    }
}

bool find(root* tree, int key)
{
    if (tree == NULL)
        return false;
    if (tree->data == key)
        return true;
    bool res1 = find(tree->left, key);
    if(res1) return true;
    bool res2 = find(tree->right, key);
    return res2;
}




