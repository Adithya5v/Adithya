#include <stdio.h>

int main() {
    float operand1, operand2;
    char operator;
    
    // Read Operand 1
    printf("Enter Operand 1: ");
    scanf("%f", &operand1);
    
    // Read Operator
    printf("Enter Operator: ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leading whitespace
    
    // Read Operand 2
    printf("Enter Operand 2: ");
    scanf("%f", &operand2);
    
    // Perform the calculation based on the operator
    float result;
    if (operator == '+') {
        result = operand1 + operand2;
    } else if (operator == '-') {
        result = operand1 - operand2;
    } else if (operator == '*') {
        result = operand1 * operand2;
    } else if (operator == '/') {
        if (operand2 != 0) {
            result = operand1 / operand2;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;  // Exit the program with an error code
        }
    } else {
        printf("Error: Invalid operator.\n");
        return 1;  // Exit the program with an error code
    }
    
    // Print the result
    printf("Result: %.2f\n", result);
    
    return 0;
}
