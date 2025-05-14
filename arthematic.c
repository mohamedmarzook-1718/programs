#include <stdio.h>

int main() {
    int num1 = 5, num2 = 5;
    int sum, difference, product, modulus;
    float quotient;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1 / num2; 
    modulus = num1 % num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Modulus: %d\n", modulus);

    return 0;
}
