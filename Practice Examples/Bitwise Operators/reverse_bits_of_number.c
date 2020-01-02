/* Write a program to reverse the bits of a number using bitwise operator. */

#include <stdio.h>

int main (void) {

    __int32_t num;

    printf ("Enter a number: ");
    scanf ("%d", &num);
    printf ("Entered number in hex: 0x%x\n", num);
    __int32_t reverse_num = 0; 
    while (num > 0) 
    { 
        // bitwise left shift  
        // 'reverse_num' by 1 
        reverse_num <<= 1; 
          
        // if current bit is '1' 
        if (num & 1 == 1) {
            reverse_num ^= 1; 
        }
        // bitwise right shift  
        // 'num' by 1 
        num >>= 1; 
              
    }
    printf ("%d\n", reverse_num);
    return 0;
}