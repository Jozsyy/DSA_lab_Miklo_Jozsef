#include <stdio.h>
#include "tomb.h"
#include "stack.h"
#include "linked_list.h"

int main() {
//    IntArray *a;
//    feltoltes(&a);
//    print(a);

//    STACK *mystack;
//    feltoltes_stack(&mystack);
//    print_stack(mystack);

    Node *nodes;
    read("players.txt",nodes);
    print_list(nodes);

    return 0;
}
