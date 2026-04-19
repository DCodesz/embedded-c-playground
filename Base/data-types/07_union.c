#include <stdio.h>

// A union to represent a value that can be either an integer or a float
// A union is a data structure that can hold different types of data but only one type at a time.
// The size of the union is determined by the size of its largest member, which in this case is the float (4 bytes).
union IntOrFloat {
    int i;     // This member can hold an integer value
    float f;   // This member can hold a float value
};

union structUnion
{
    /* data */
    int register1;
    struct 
    {
        /* data */
        int register2;
        float register3;
        double register4;
    }reg;
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

    union structUnion su;
    su.register1 = 10;
    printf("Struct union register1: %d\n", su.register1);
    printf("Struct union register2: %d\n", su.reg.register2);
    printf("Struct union register3: %.2f\n", su.reg.register3);
    printf("Struct union register4: %lf\n", su.reg.register4);
    printf("Size of structUnion: %lu bytes\n", sizeof(union structUnion));
    su.reg.register2 = 20;
    printf("Struct union register2: %d\n", su.reg.register2);
    printf("Struct union register3: %.2f\n", su.reg.register3);
    printf("Struct union register4: %lf\n", su.reg.register4);
    printf("Size of structUnion: %lu bytes\n", sizeof(union structUnion));

    return 0;
}