#include <stdio.h>

int main() {
    // A loop is a control structure that allows you to execute a block of code repeatedly based on a condition. 
    // The most common types of loops in C are the for loop, while loop, and do-while loop.

    // For loop: A for loop is used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and increment/decrement.
    printf("For loop post-increment:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", i); // This will print the numbers from 0 to 4
    }
    printf("\n");

    printf("For loop with pre-increment:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    // Factorially, the choice between post-increment (i++) and pre-increment (++i) in a for loop does not affect the behavior of the loop in this context, as the increment operation is performed after the current value of i is used in the loop body. However, using pre-increment can be more efficient in certain cases, especially when dealing with iterators or complex data structures, as it avoids the need for a temporary variable to hold the original value of i before incrementing. In simple cases like this, the difference is negligible, and both forms will produce the same output. However, using pre-increment (++i) is generally considered a good practice in C programming, as it can lead to more efficient code in certain scenarios.
    printf("Factorial using for loop:\n");
    int factorial = 1;
    for (int i = 1; i <= 5; i++) {
        factorial *= i; // This will calculate the factorial of 5 (1*2*3*4*5)
    }
    printf("Factorial of 5 is: %d\n", factorial);

    // Factorial using pre-increment:
    printf("Factorial using for loop with pre-increment:\n");
    factorial = 1;
    for (int i = 1; i <= 5; ++i) {
        factorial *= i; // This will calculate the factorial of 5 (1*2*3*4*5)
    }
    printf("Factorial of 5 is: %d\n", factorial);

    // While loop: A while loop is used when the number of iterations is not known beforehand. It continues to execute as long as the condition is true.
    printf("While loop:\n");
    int j = 0;
    while (j < 5) {
        printf("%d ", j); // This will print the numbers from 0 to 4
        j++;
    }
    printf("\n");

    // Do-while loop: A do-while loop is similar to a while loop, but it guarantees that the block of code will be executed at least once, as the condition is checked after the block is executed.
    printf("Do-while loop:\n");
    int k = 0;
    do {
        printf("%d ", k); // This will print the numbers from 0 to 4
        k++;
    } while (k < 5);
    printf("\n");

    return 0;
}