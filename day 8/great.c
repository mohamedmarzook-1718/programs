#include <stdio.h>

int greatest_of_three(int y, int x, int z) {
    int max = y;
    if (x > max) max = x;
    if (z > max) max = z;
    return max;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int greatest = greatest_of_three(num1, num2, num3);
    printf("The greatest number is: %d\n", greatest);

    return 0;
}