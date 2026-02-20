
#include <stdio.h>

int main( void ) {

    // define suitable data, where c is the operator
    int a, b;
    char c;


    // use scanf to read from the terminal
    // print the output from scanf and the data values, a and b are values and c is the operator
    printf("Enter an expression (e.g. 3 + 4): ");
    
    if (scanf("%d %c %d", &a, &c, &b) != 3) {
        printf("Error: Invalid input format.\n");
        return 1;
    }

    if (c == '+') {
        printf("The sum is: %d\n", a + b);
    } else if (c == '-') {
        printf("The difference is: %d\n", a - b);
    } else if (c == '*') {
        printf("The product is: %d\n", a * b);
    } else if (c == '/') {
        if (b != 0) {
            printf("The quotient is: %d\n", a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator '%c'. Please use +, -, *, or /.\n", c);
    }
    
    return 0;
}