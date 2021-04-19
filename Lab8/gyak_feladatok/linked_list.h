//
// Created by Jozsi on 2021-04-13.
//

#ifndef GYAK_FELADATOK_LINKED_LIST_H
#define GYAK_FELADATOK_LINKED_LIST_H

typedef struct {
    char nev[25];
    int data;
    struct Node* next;
} Node;

Node* createNode();
void insert(Node** front, char *nev, int data);
void remove_node(Node *front);
void destroy(Node* front);
void read(const char *fileName,Node *myNode);
void print_list(Node *myNode);


#endif //GYAK_FELADATOK_LINKED_LIST_H
