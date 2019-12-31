/* Write a program to toggle a bit of a given number and print the output. */

#include <stdio.h>

int main(void) {
	__int32_t num1, output;
	printf ("Enter a number: ");
	scanf ("%d", &num1);
	output = num1 ^ 0x32;
	printf ("0x%x ^ 0x%x = 0x%x", num1, 0x32, output);
	return 1;
}
