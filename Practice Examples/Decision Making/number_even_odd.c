/* Write a program to find whether the entered number is even or odd. */

#include <stdio.h>

int main (void) {

    int num1;
    printf ("Enter a number: ");
    scanf ("%d", &num1);

    if ((num1 % 2) == 0) {
        printf ("Entered number is an even number.\n");
    } else {
        printf ("Entered number is an odd number.\n");
    }

	printf("\nPress 'Enter' key to exit the application \n");
    while(getchar() != '\n')
    {
    	//just read the input buffer and do nothing
    }
    getchar();
    return 0;
}