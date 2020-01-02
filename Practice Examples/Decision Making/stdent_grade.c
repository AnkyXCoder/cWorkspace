/* Write a program to show students' grade based on their percentages entered. */

#include <stdio.h>

int main (void) {
    
    float percentage;

    printf ("Enter your percentage: ");
    scanf ("%f", &percentage);

    if ( (percentage >= 0) && (percentage <= 100) ) {
        if ( percentage > 60 ) {
            printf ("Grade A.\n");
        } else if ( (percentage > 50) && (percentage <= 60) ) {
            printf ("Grade B.\n");
        } else if ( (percentage > 40) && (percentage <= 50) ) {
            printf ("Grade C.\n");
        } else if ( percentage < 40 ) {
            printf ("Failed.\n");
        }
    } else {
        printf ("Error.\nEnter valid percentage.\n");
    }

    printf ("Press 'Enter' to exit the application...");
    getchar();
    getchar();
    return 0;
}