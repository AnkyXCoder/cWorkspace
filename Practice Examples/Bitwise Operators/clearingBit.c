/* Write a program to clear bits of a given number and print the output. */

#include <stdio.h>

int main(void) {
	__int32_t num1, output;

	printf ("Enter a number: ");
	scanf ("%d", &num1);
	output = num1 & 0b10001111;
	printf("0x%x & 0x%x = 0x%x\n", num1, 0b10001111, output);
	return 1;
}
