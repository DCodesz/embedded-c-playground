#include <stdio.h>

int main() {
    // Print the size of various data types in bytes %zu is the format specifier for size_t, 
    //which is the type returned by sizeof operator
    printf("char      = %zu\n", sizeof(char));
    printf("short     = %zu\n", sizeof(short));
    printf("int       = %zu\n", sizeof(int));
    printf("long      = %zu\n", sizeof(long));
    printf("long long = %zu\n", sizeof(long long));
    printf("float     = %zu\n", sizeof(float));
    printf("double    = %zu\n", sizeof(double));

    int normalInt = 42;
    printf("Value of normalInt = %d, Size of normalInt (int) = %zu\n", normalInt, sizeof(normalInt));

    int outofRangeInt = 2147483647 + 1; // This value is out of range for a 32-bit signed int 
    // The behavior of this assignment is implementation-defined, but it typically results in overflow and wraps around to a negative value due to the way signed integers are represented in memory (two's complement).
    printf("Value of outofRangeInt = %d, Size of outofRangeInt (int) = %zu\n", outofRangeInt, sizeof(outofRangeInt));

    int outofRangeInt1 = 274877906944; // This value is out of range for a 32-bit signed int 
    // The behavior of this assignment is implementation-defined, but it typically results in overflow and wraps around to a negative value due to the way signed integers are represented in memory (two's complement).
    printf("Value of outofRangeInt1 = %d, Size of outofRangeInt1 (int) = %zu\n", outofRangeInt1, sizeof(outofRangeInt1));

    // Print the size of pointer types in bytes
    // The size of pointer types can vary based on the architecture (32-bit vs 64-bit).
    // On a 32-bit system, pointers are typically 4 bytes, while on a 64-bit system, they are typically 8 bytes. 
    // This is because the pointer needs to be able to hold the address of any location in memory, and the size of the address space is determined by the architecture.
    printf("Size of pointer types:\n");
    printf("char*     = %zu\n", sizeof(char*)); 
    printf("int*      = %zu\n", sizeof(int*));
    printf("double*   = %zu\n", sizeof(double*));
}