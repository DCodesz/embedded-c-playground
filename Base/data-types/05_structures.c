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

    return 0;
}