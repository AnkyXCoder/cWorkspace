/* Write a Program to find the given number is power of 2 or not. */

#include <stdio.h>

int main (void) {

    __int32_t num;

    printf ("Enter a number: ");
    scanf ("%d", &num);
    printf ("Entered number in hex: 0x%x\n", num);
    printf ("0x%x\n", (num & (num - 1)));
    if ((num & (num - 1)) == 0) {
        printf ("Given number is a power of 2.\n");
    } else {
        printf ("Given number is not a power of 2.\n");
    }
    return 0;
}