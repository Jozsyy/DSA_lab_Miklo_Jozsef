#include <stdio.h>
#include "functions.h"


int main() {
   IntArray *a;
   createArray(6);
   readArray("in.txt",&a);
   //fillArray(&a->elements,6,0,50);
   printArray(a);
   printArrayToFile("out.txt",a);
   sortArray(a);
   printf("\n");
   printArray(a);
   printf("\n%i",findElement(a,10));
    return 0;
}
