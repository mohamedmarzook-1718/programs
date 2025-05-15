#include <stdio.h>

int main() {
    int num1, num2;

    // Get two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // AND operation
    printf("AND (num1 & num2): %d\n", num1 & num2);

    // OR operation
    printf("OR (num1 | num2): %d\n", num1 | num2);

    // XOR operation
    printf("XOR (num1 ^ num2): %d\n", num1 ^ num2);

    // NOT operation
    printf("NOT (~num1): %d\n", ~num1);
    printf("NOT (~num2): %d\n", ~num2);

    return 0;
}                      