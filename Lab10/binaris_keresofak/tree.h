//
// Created by Jozsi on 2021-04-27.
//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#ifndef BINARIS_KERESOFAK_TREE_H
#define BINARIS_KERESOFAK_TREE_H

typedef struct root {
    int data;
    struct root *left;
    struct root *right;
}root;

root *create(int a);
void destroy(root **);
void insert(root **tree, int a);
void inorder(root *tree);
void preorder(root *tree);
void postorder(root *tree);
//root *delete(root **tree, int a);
bool find(root *tree, int key);

#endif //BINARIS_KERESOFAK_TREE_H
