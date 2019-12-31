/* Write a program to set a bit of a given number and print the result. */

#include <stdio.h>

int main(void) {
	__int32_t num1, output;

	printf("Enter a number: ");
	scanf ("%d", &num1);
	output = num1 | 0x90;
	printf("0x%x | 0x%x = 0x%x\n", num1, 0x90, output);
	return 1;
}
