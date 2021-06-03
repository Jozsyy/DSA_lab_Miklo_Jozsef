#include "stack.h"

int main() {
    STACK *myStack=create(10);
    readFromFile(myStack,"years.txt");
    statistic(myStack);
    return 0;
}
