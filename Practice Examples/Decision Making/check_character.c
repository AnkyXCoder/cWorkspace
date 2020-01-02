/* Write a program to check if the given character is an alphabet or not. */

#include <stdio.h>

int main (void) {
    
    char chr;

    printf ("Enter a character: ");
    scanf ("%c", &chr);

    if (((chr >= 65) && (chr <= 90)) || ((chr >= 97) && (chr <= 122))) {
        printf ("Given character is an alphabet.\n");
    } else {
        printf ("It's not an alphabet.\n");
    }

    printf ("Press 'Enter' to exit the application...");
    getchar();
    getchar();
    return 0;
}