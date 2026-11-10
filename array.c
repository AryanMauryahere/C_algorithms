#include <stdio.h>
int main() {
    printf("Hello, World!\n");
    // typedef struct CArray {
    //   int *array;
    //   int size;
    // } CArray;
    printf("CArray struct defined with an integer pointer and size.\n");
    int array[5] = {1, 2, 3, 4, 5};
    printf("Array elements: %d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);
  }