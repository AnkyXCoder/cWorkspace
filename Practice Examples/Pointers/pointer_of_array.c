/* Write a program to print a string using pointer. */

#include <stdio.h>

int main (void) {
    char *names[] = {"Hey there, Rupert!", "Hi, Robert.", "Nice to meet you, Balena.", "Great, Chris."};

    for (int i = 0; i < 4; i++) {
        printf ("%s\n", names[i]);
    }
    return 0;
}