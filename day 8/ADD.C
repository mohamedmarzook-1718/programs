#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;
    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);
    result = add(num1, num2);
    printf("sum is %d\n", result);
    return 0;
}