#include <stdio.h>
#include <time.h>

void identify_Timing_Differences() {
    // This function is a placeholder to identify timing differences in conditional statements
    // In C, the execution time of if-else statements and switch statements can vary based on the number of conditions and the position of the matching case.
    // The ternary operator is generally faster than if-else statements for simple conditions because it is a single expression.
    
    int i, n = 10000000, x = 3;
    clock_t start, end;
    double ifelse_time, switch_time;

    // Measure if-else time (identical logic to switch-case)
    start = clock();
    x = 1;
    for (i = 0; i < n; i++) {
        if (x == 1)
            x = 2;
        else if (x == 2)
            x = 3;
        else if (x == 3)
            x = 4;
        else if (x == 4)
            x = 5;
        else if (x == 5)
            x = 6;
        else if (x == 6)
            x = 7;
        else if (x == 7)
            x = 8;
        else if (x == 8)
            x = 9;
        else if (x == 9)
            x = 1;
        else
            x = 1;
    }
    end = clock();
    ifelse_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Reset x
    x = 1;

    // Measure switch-case time (identical logic)
    start = clock();
    for (i = 0; i < n; i++) {
        switch (x) {
            case 1: x = 2; break;
            case 2: x = 3; break;
            case 3: x = 4; break;
            case 4: x = 5; break;
            case 5: x = 6; break;
            case 6: x = 7; break;
            case 7: x = 8; break;
            case 8: x = 9; break;
            case 9: x = 1; break;
            default: x = 1; break;
        }
    }
    end = clock();
    switch_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Time taken by if-else: %f seconds\n", ifelse_time);
    printf("Time taken by switch-case: %f seconds\n", switch_time);

}

int main() {
    int a = 10;
    int b = 20;

    // Using an if statement to compare two numbers
    // There is no else if in C, it is just a combination of if and else statements
    // The else if will be just like an else and inside that else we will have another if statement

    if (a > b) 
    {
        printf("a is greater than b\n");
    } 
    else if (a < b) 
    {
        printf("a is less than b\n");
    } 
    else 
    {
        printf("a is equal to b\n");
    }

    // Using a switch statement to evaluate a variable
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("You can do better.\n");
            break;
        case 'D':
            printf("Needs improvement.\n");
            break;
        case 'F':
            printf("Failing grade.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }

    // Using a ternary operator to assign a value based on a condition
    // The ternary operator is a shorthand for an if-else statement and is used to assign a value based on a condition.
    // Here, using ternary operation we check if a is greater than b, if it is true then we assign a to max, otherwise we assign b to max.
    int max = (a > b) ? a : b; // This will assign the greater of a and b to max
    printf("The maximum value is: %d\n", max); 

    identify_Timing_Differences();

    return 0;
}