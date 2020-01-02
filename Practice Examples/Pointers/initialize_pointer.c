/* Write a program to create, initialize and access a pointer. */

#include <stdio.h>

int main (void) {

    char data = 100;

    printf ("Value of variable data: %d\n", data);
    printf ("Address of variable data is: %p\n", &data);

    char* pAddress = &data;
    char value = *pAddress;
    printf ("Read value is: %d\n", value);

    return 0;
}