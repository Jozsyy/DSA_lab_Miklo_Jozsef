//
// Created by Jozsi on 2021-06-02.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef FELADAT1_TREE_H
#define FELADAT1_TREE_H

typedef struct root {
    int data;
    struct root *left;
    struct root *right;
}root;

root *create(int a);
void insert(root **tree, int a);
void inorder(root *tree,int i,int n, int m);
void elozo(root *tree,int elobbi, int keresett);


#endif //FELADAT1_TREE_H
