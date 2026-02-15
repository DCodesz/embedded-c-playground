#include <stdio.h>

int main() 
{
    //This will print "C" and then print the number of characters printed by the inner printf, which is 1.
    printf("%d\n", printf("C"));

    //This is a nested printf, the inner printf will execute first and return the number of characters printed, which will then be used as arguments for the outer printf.
    printf("%d %d %d\n", printf("A"), printf("B"), printf("C"));

    return 0;
}