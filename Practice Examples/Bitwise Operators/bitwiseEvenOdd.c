/* Write a program to find a given number is Even or Odd using testing of bits method. */

#include <stdio.h>

int main (void) {
	__int32_t num1;
	printf ("Enter a number: ");

	scanf ("%d", &num1);

	if (num1 & 1) {
		printf("Given number is Odd.\n");
	} else {
		printf("Given number is Even.\n");
	}
}
