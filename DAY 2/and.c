#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 0 && age <= 100) {
        if (age >= 18) {
            printf("You are above 18.\n");
        } else {
            printf("You are below 18.\n");
        }
    } else {
        printf("Invalid age entered.\n");
    }

    return 0;
}