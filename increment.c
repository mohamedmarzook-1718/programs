#include <stdio.h>

int main() {
    int number = 10;

    // Increment operation
    printf("Initial value: %d\n", number);
    number++;
    printf("After increment: %d\n", number);

    // Get value from user
    printf("Enter a new value for number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Exiting program.\n");
        return 1;
    }
    printf("Updated value: %d\n", number);

    // Pre-increment operation
    ++number;
    printf("After pre-increment: %d\n", number);

    // Pre-decrement operation
    --number;
    printf("After pre-decrement: %d\n", number);

    // Decrement operation
    number--;
    printf("After decrement: %d\n", number);

    return 0;
}