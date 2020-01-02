/* Write a program to implement a simple calculator. */

#include <stdio.h>

int main (void) {

    float num1, num2;
    char operator;
    printf ("Enter two real numbers: ");
    scanf ("%f %f", &num1, &num2);
    getchar();
    printf ("Choose from the following list:\n+ for addition\n- for subtraction\nx for multiplication\n/ for divison\n");
    scanf("%c", &operator);

    if (operator == '+') {
        printf ("%f + %f = %f\n", num1, num2, (num1 + num2));
    } else if (operator == '-') {
        printf ("%f - %f = %f\n", num1, num2, (num1 - num2));
    } else if (operator == 'x') {
        printf ("%f x %f = %f\n", num1, num2, (num1 * num2));
    } else if (operator == '/') {
        printf ("%f / %f = %f\n", num1, num2, (num1 / num2));
    } else {
        printf("Invalid operator.\n");
    }

	printf("\nPress 'Enter' key to exit the application \n");
    while(getchar() != '\n')
    {
    	//just read the input buffer and do nothing
    }
    getchar();
    return 0;
}