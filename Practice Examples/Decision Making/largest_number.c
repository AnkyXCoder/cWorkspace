/* Write a program to find the largest number of the given three numbers. */

#include <stdio.h>

int main (void) {
    
    float num1, num2, num3, largest_num;
    printf ("Enter three numbers: ");
    scanf ("%f %f %f", &num1, &num2, &num3);

    largest_num = (num1 > num2) ? ((num1 > num3) ? num1 : num3): ((num2 > num3) ? num2 : num3);
    printf ("Largest number is: %f\n", largest_num);

    printf ("Press 'Enter' to exit the application...");
    getchar();
    getchar();
    return 0;
}