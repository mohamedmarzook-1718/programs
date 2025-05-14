#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient, remainder;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = (int)num1 % (int)num2;

    // Display results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Remainder: %.0f\n", remainder);

    return 0;
}