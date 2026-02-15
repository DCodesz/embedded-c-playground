#include <stdio.h>

int main() {
    int x = printf("Hello");
    printf("\nPrinted chars = %d\n", x);

    printf("%d\n", printf("C"));

    printf("%d %d %d\n", printf("A"), printf("B"), printf("C"));

    int count = 0;
    printf("Hello%n World\n", &count);
    printf("Characters before %%n = %d\n", count);

    return 0;
}