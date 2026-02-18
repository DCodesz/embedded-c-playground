#include <stdio.h>

// Nothing Fancy pointers are just a variable that holds memory address of another variable.
// The pointer is as basic as a variable, but instead of holding a value, it holds the address of another variable.
// This can be void which can be type-casted to any datatype. 
// The size of a pointer is typically 4 bytes on a 32-bit system and 8 bytes on a 64-bit system, regardless of the type it points to. This is because the pointer needs to be able to hold the address of any location in memory, and the size of the address space is determined by the architecture.
// The datatype is specified to indicate the type of data it will be storing so that based on datatype the compiler can perform addition or any mathematical operation.

int main() {
    // Declare an integer variable and a pointer to an integer
    int num = 42;
    int* ptr = &num; // The & operator is used to get the address of the variable num

    // Print the value of num and the value pointed to by ptr
    printf("Value of num = %d\n", num); // This will print 42
    printf("Value pointed to by ptr = %d\n", *ptr); // The * operator is used to dereference the pointer, which gives us the value stored at that address. This will also print 42.

    // Print the address of num and the value of ptr
    printf("Address of num = %p\n", (void*)&num); // This will print the memory address of num. The %p format specifier is used for printing pointers, and we cast the address to void* for portability.
    printf("Value of ptr (address it points to) = %p\n", (void*)ptr); // This will print the same memory address as above, since ptr points to num.

    // Modify the value of num using the pointer
    *ptr = 100; // This changes the value at the address that ptr points to, which is num. Now num will be 100.

    // Print the modified value of num and the value pointed to by ptr again
    printf("Modified value of num = %d\n", num); // This will print 100
    printf("Value pointed to by ptr after modification = %d\n", *ptr); // This will also print 100

    int *intPtr = NULL; // A pointer that is initialized to NULL does not point to any valid memory location. It is a good practice to initialize pointers to NULL if they are not immediately assigned a valid address, as this can help prevent accidental dereferencing of uninitialized pointers, which can lead to undefined behavior.
    float *floatPtr = NULL; // Similarly, this pointer is also initialized to NULL.
    double *doublePtr = NULL; // This pointer is also initialized to NULL.
    char *charPtr = NULL; // This pointer is also initialized to NULL.
    long *longPtr = NULL; // This pointer is also initialized to NULL.

    printf("Size of int pointer = %zu bytes\n", sizeof(intPtr)); // This will print the size of an int pointer, which is typically 4 bytes on a 32-bit system and 8 bytes on a 64-bit system.
    printf("Size of float pointer = %zu bytes\n", sizeof(floatPtr)); // This will print the size of a float pointer, which is typically 4 bytes on a 32-bit system and 8 bytes on a 64-bit system.
    printf("Size of double pointer = %zu bytes\n", sizeof(doublePtr)); // This  will print the size of a double pointer, which is typically 4 bytes on a 32-bit system and 8 bytes on a 64-bit system.
    printf("Size of char pointer = %zu bytes\n", sizeof(charPtr)); // This will print the size of a char pointer, which is typically 4 bytes on a 32-bit system and 8 bytes on a 64-bit system.
    printf("Size of long pointer = %zu bytes\n", sizeof(longPtr)); // This will print the size of a long pointer, which is typically 4 bytes on a 32-bit system and 8 bytes on a 64-bit system.

    return 0;
}