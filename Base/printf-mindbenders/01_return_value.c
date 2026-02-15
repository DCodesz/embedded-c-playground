#include <stdio.h>

int main() {

    int x = printf("Hello");
    //The printf function returns the number of characters printed, which in this case is 5 for "Hello".
    printf("\nPrinted chars = %d\n", x);
    
    return 0;
}