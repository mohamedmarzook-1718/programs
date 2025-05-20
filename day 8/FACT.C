#include <stdio.h>

int fact(int x) {
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int x, a;
    printf("Enter the value: ");
    scanf("%d", &x);
    a = fact(x);
    printf("Factorial is: %d\n", a);
    return 0;
}
