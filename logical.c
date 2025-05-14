#include <stdio.h>

int main() {
    int a, b, c;

    // Get values from the user
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);

    // Logical AND (&&)
    if (a > 0 && b > 0) {
        printf("Both a and b are positive numbers.\n");
    }

    // Logical OR (||)
    if (a > 0 || c > 0) {
        printf("At least one of a or c is a positive number.\n");
    }

    // Logical NOT (!)
    if (!c) {
        printf("c is zero.\n");
    }

    return 0;
}