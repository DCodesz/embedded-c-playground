#include <stdio.h>

// A union to represent a value that can be either an integer or a float
// A union is a data structure that can hold different types of data but only one type at a time.
// The size of the union is determined by the size of its largest member, which in this case is the float (4 bytes).
union IntOrFloat {
    int i;     // This member can hold an integer value
    float f;   // This member can hold a float value
};

// Main function to demonstrate the use of unions
int main() {
    union IntOrFloat value;

    // Assign an integer value to the union
    value.i = 42;
    printf("Integer value: %d\n", value.i);
    printf("Float value: %.2f\n", value.f);

    // Assign a float value to the union (this will overwrite the previous integer value)
    value.f = 3.14f;
    printf("Float value: %.2f\n", value.f);

    // Note that the integer value is now overwritten and may not be valid
    printf("Integer value after assigning float: %d\n", value.i);

    printf("Size of IntOrFloat union: %lu bytes\n", sizeof(union IntOrFloat));

    return 0;
}