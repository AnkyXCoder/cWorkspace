/* Write a program to delete few of the bits of the given number using bitwise operator. */

#include <stdio.h>

int main (void) {

    __int32_t num;

    printf ("Enter a number: ");
    scanf ("%d", &num);
    printf ("Entered number in hex: 0x%x\n", num);
    
    int n = 2, k = 2;
    __int32_t revised_num = 0;
    
    while(num > 0) {
        
        if (num & 1 == 1) {
            revised_num ^= 1;
        }
        revised_num >>= 1;
        num >>= 1;
        
    }
    printf("Revised number: %d\n", revised_num);
}