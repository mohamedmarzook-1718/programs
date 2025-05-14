#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Demonstrate relational operators
    printf("a = %d, b = %d\n", a, b);
    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n", a != b); // Not equal to
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a < b: %d\n", a < b);   // Less than
    printf("a >= b: %d\n", a >= b); // Greater than or equal to
    printf("a <= b: %d\n", a <= b); // Less than or equal to

    return 0;
}