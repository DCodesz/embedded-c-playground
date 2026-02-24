#include <stdio.h>

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

    return 0;
}