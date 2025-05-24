#include <stdio.h>
int lcm(int a, int b, int candidate) {
    if (candidate % a == 0 && candidate % b == 0)
        return candidate;
    else
        return lcm(a, b, candidate + 1);
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int start = (num1 > num2) ? num1 : num2;
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2, start));
    return 0;
}