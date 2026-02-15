#include <stdio.h>

int main() 
{
    //This will print "C" and then print the number of characters printed by the inner printf, which is 1.
    printf("%d\n", printf("C"));

    //This is a nested printf, the inner printf will execute first and return the number of characters printed, which will then be used as arguments for the outer printf.
    printf("%d %d %d\n", printf("A"), printf("B"), printf("C"));

    //This is a more complex nested printf, it will print "Hello" and then print the number of characters printed by each inner printf, which will be 5 for "Hello", 2 for the first %d (which prints 5), 2 for the second %d (which prints 2), and 2 for the third %d (which prints 2).
    printf("%d\n", printf("%d\n", printf("%d\n", printf("Hello"))));

    int a = 10, b = 20;
    //This will print the values of a and b, and then print the number of characters
    //printed by the inner printf, which will be 15 for "a = 10, b = 20".
    printf("%d\n", printf("a = %d, b = %d\n", a, b));

    char name[] = "Hello";
    //This will print "Name: Hello" and then print the number of characters printed by the inner printf, which will be 12 for "Name: Hello".
    printf("%d\n", printf("Name: %s\n", name));

    printf("%d\n", printf("This is a nested printf example.\n"));

    return 0;
}