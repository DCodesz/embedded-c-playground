#include <stdio.h>

// A structure to represent a point in 2D space
struct Point {
    int x;
    int y;
};

// A structure to demonstrate padding in C
struct StructWithPadding {
    int x;  // This will be aligned to a 4-byte boundary
    int y;  // This will be aligned to a 4-byte boundary, causing padding after it
    char c; // This will cause padding to be added after it to align the structure size to a multiple of the largest member (int in this case)
};

// Another structure to demonstrate padding with different member order
struct StructWithPadding_01 {
    char c;     // This will cause padding to be added after it
    char x;     // This will cause padding to be added after it
    int y;      // This will be aligned to a 4-byte boundary, causing padding before it 
};

// Another structure to demonstrate padding with different member order
struct StructWithPadding_02 {
    char c;     // This will cause padding to be added after it
    char x;     // This will cause padding to be added after it
    char z;     // This will cause padding to be added after it
};

// Another structure to demonstrate padding with different member order
struct StructWithPadding_03 {
    char c;     // This will cause padding to be added after it
    char x;     // This will cause padding to be added after it
    char z;     // This will cause padding to be added after it
    int y;      // This will be aligned to a 4-byte boundary, causing padding before it
};

// Another structure to demonstrate padding with different member order
struct StructWithPadding_04 {
    char a;     // This will cause padding to be added after it
    char b;     // This will cause padding to be added after it
    char c;     // This will cause padding to be added after it
    char d;     // This will cause padding to be added after it
    int y;      // This will be aligned to a 4-byte boundary, causing padding before it
};

// Main function to demonstrate the use of structures
int main() {
    struct Point p1 = {10, 20};
    struct Point p2 = {30, 40};

    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);

    printf("Size of Point structure: %lu bytes\n", sizeof(struct Point));

    struct StructWithPadding sp = {1, 2, 'A'};
    printf("Struct with padding: x=%d, y=%d, c=%c\n", sp.x, sp.y, sp.c);
    printf("Size of StructWithPadding structure: %lu bytes\n", sizeof(struct StructWithPadding));

    struct StructWithPadding_01 sp01 = {'B', 'C', 4};
    printf("Struct with padding 01: c=%c, x=%c, y=%d\n", sp01.c, sp01.x, sp01.y);
    printf("Size of StructWithPadding_01 structure: %lu bytes\n", sizeof(struct StructWithPadding_01));

    struct StructWithPadding_02 sp02 = {'D', 'E', 'F'};
    printf("Struct with padding 02: c=%c, x=%c, z=%c\n", sp02.c, sp02.x, sp02.z);
    printf("Size of StructWithPadding_02 structure: %lu bytes\n", sizeof(struct StructWithPadding_02));

    struct StructWithPadding_03 sp03 = {'G', 'H', 'I', 5};
    printf("Struct with padding 03: c=%c, x=%c, z=%c, y=%d\n", sp03.c, sp03.x, sp03.z, sp03.y);
    printf("Size of StructWithPadding_03 structure: %lu bytes\n", sizeof(struct StructWithPadding_03)); 

    struct StructWithPadding_04 sp04 = {'J', 'K', 'L', 'M', 6};
    printf("Struct with padding 04: a=%c, b=%c, c=%c, d=%c, y=%d\n", sp04.a, sp04.b, sp04.c, sp04.d, sp04.y);
    printf("Size of StructWithPadding_04 structure: %lu bytes\n", sizeof(struct StructWithPadding_04)); 
    
    return 0;
}