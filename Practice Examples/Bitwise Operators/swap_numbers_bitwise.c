/* Write a program to swap two number using bitwise operators. */

#include <stdio.h>

int main (void) {

    __int32_t num1, num2;

    printf ("Enter num1: ");
    scanf ("%d", &num1);
    printf ("Enter num2: ");
    scanf ("%d", &num2);

    num1 = num1 ^ num2;
    num2 = num2 ^ num1;
    num1 = num1 ^ num2;

    printf ("New numbers are: num1 = %d and num2 = %d.\n", num1, num2);
    return 0;
}