#include<stdio.h>

int sub(int a, int b) {
    return a - b;
}

int add(int a, int b) {
    return a + b;
}

int multi(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main() {
    int num1, num2, result;
    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);

    result = add(num1, num2);
    printf("sum is %d\n", result);

    result = sub(num1, num2);
    printf("difference is %d\n", result);

    result = multi(num1, num2);
    printf("product is %d\n", result);

    result = div(num1, num2);
    printf("quotient is %d\n", result);

    return 0;
}