#include <stdio.h>

//Macros only perform textual substitution in compilation time.

#define SQUAREERR(x) (x * x)

#define MULTIPLY(a, b) (a * b)
// (1 + 2) * (3 + 4) = 21, but without parentheses it would be 1 + 2 * 3 + 4 = 11

#define MULTIPLYWITHPARENTHESIS(a, b) ((a) * (b))

#define x 1 +2  //Space does not affect the macro definition, but it can lead to unexpected results when used in expressions due to operator precedence. For example, MULTIPLY(x, y) would expand to (1 + 2 * 3 + 4) instead of (1 + 2) * (3 + 4).
#define y 3 +4

// This code demonstrates the use of macros in C. A macro is a fragment of code which has been given a name. Whenever the name is used, it is replaced by the contents of the macro. In this example, we define a macro called SQUARE that takes one argument x and returns the square of x.
#define SQUARE(x) ((x) * (x))

int main() {

    //Faulty operation using the SQUAREERR macro, which does not properly parenthesize the argument, leading to incorrect results when used with expressions.
    int result = SQUAREERR(3 + 2); // This will not give the expected result of 25 due to operator precedence issues. It will be evaluated as (3 + 2 * 3 + 2) which equals 11.
    printf("Result of SQUAREERR(3 + 2) = %d\n", result);

    // Faulty operation using the MULTIPLY macro, which does not properly parenthesize its arguments, leading to incorrect results when used with expressions.
    printf("Result of x * y = %d\n", MULTIPLY(x, y)); 

    // Correct operation using the MULTIPLYWITHPARENTHESIS macro, which properly parenthesizes its arguments to ensure correct evaluation.
    printf("Result of x * y with parentheses = %d\n", MULTIPLYWITHPARENTHESIS(x, y)); 

    int num = 5;
    // This will print the square of num, which is 25. The macro SQUARE(x) replaces x with num, so it becomes ((5) * (5)).
    printf("The square of %d is %d\n", num, SQUARE(num));

    // This will print the result of SQUARE(num + 1), which is 36. The macro expands to ((num + 1) * (num + 1)), which becomes ((5 + 1) * (5 + 1)).
    printf("The square of %d is %d\n", num + 1, SQUARE(num + 1));

    // This will print the result of SQUARE(3), which is 9. The macro expands to ((3) * (3)).
    printf("The square of %d is %d\n", 3, SQUARE(3));

    return 0;
}