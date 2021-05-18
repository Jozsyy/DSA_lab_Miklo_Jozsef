//
// Created by Jozsi on 2021-05-18.
//
#include <stdlib.h>
#include <stdio.h>
#ifndef HASH_TABLE_HASHTABLE_H
#define HASH_TABLE_HASHTABLE_H

int* createHashTable(int m);
int search(int k, int *t, int m);
void insert(int k, int *t, int m);
void delete(int k, int *t, int m);

#endif //HASH_TABLE_HASHTABLE_H
