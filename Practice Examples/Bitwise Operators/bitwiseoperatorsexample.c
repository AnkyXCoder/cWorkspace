/* Write a program which takes two integers from the user, computes bitwise &, |, ^ and ~ and then prints the result. */

#include <stdio.h>

int main() {

	int num1, num2;
	printf("Enter 2 numbers separated by a space: \n");
	scanf ("%d %d", &num1, &num2);
	
	printf("Bitwise AND(&): %d\n", (num1 & num2));
	printf("Bitwise OR(|): %d\n", (num1 | num2));
	printf("Bitwise XOR(^): %d\n", (num1 ^ num2));
	printf("Bitwise NAGATE(~): %d and %d\n",(~num1), (~num2));
	printf("Logical AND(&&): %d\n", (num1 && num2));
	printf("Logical OR(||): %d\n", (num1 || num2));
	printf("Logical XOR(^): %d\n", (num1 ^ num2));
	printf("Logical NAGATE(!): %d and %d\n",(!num1), (!num2));
}
