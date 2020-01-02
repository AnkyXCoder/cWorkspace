/* Write a program to change constant integer using a pointer. */

#include <stdio.h>

int main (void) {

    const int data = 100;

    printf ("Value of Constant variable data: %d\n", data);
    printf ("Address of Constant variable data is: %p\n", &data);

    int* pAddress = &data;
    int value = *pAddress;
    printf ("Read value is: %d\n", value);

    *pAddress = 65; 
    printf ("Updated value of Constant variable data is: %d\n", data);

    return 0;
}