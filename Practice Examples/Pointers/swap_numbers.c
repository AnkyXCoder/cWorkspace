/* Write a program to swap two numbers using a pointer. */

#include <stdio.h>

int main (void) {

    int num1 = 100, num2 = 200;

    int *pnum1 = &num1, *pnum2 = &num2;

    printf ("Value of Number 1 is: %d\n", *pnum1);
    printf ("Value of Number 2 is: %d\n", *pnum2);

    int temp;
    temp = *pnum1;
    *pnum1 = *pnum2;
    *pnum2 = temp;

    printf ("Value of Number 1 is: %d\n", *pnum1);
    printf ("Value of Number 2 is: %d\n", *pnum2);
    
    return 0;
}