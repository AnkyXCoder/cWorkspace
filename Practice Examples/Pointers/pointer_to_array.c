/* Write a program to read array elements and print with addresses using a pointer. */

#include <stdio.h>

int main (void) {
    int arr [5] = {1, 2, 3, 4, 5};

    int *p = arr;
    
    for (int i = 0; i < 5; i++) {
        printf ("value of arr[%d] at p = %d & address is: %p\n", i, *p, p);
        p++;
    }
    return 0;
}