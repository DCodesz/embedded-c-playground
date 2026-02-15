#include <stdio.h>

int main() {
    // Demonstrate the difference between signed and unsigned char
    unsigned char u = 255;
    signed char s = u;
    // Print the values of unsigned and signed char
    // %u is the format specifier for unsigned int, and %d is for signed int
    // When we assign 255 to an unsigned char, it can hold that value. However, when we assign it to a signed char, it wraps around and becomes -1 due to the way signed integers are represented in memory (two's complement).
    // This illustrates how the same binary representation can be interpreted differently based on whether it's signed or unsigned.
    // In C, the behavior of signed overflow is undefined, but in practice, it often wraps around. The value 255 in an unsigned char is represented as 11111111 in binary. When interpreted as a signed char, this binary pattern represents -1.
    printf("u = %u\n", u);
    printf("s = %d\n", s);
}
