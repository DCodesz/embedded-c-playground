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
}