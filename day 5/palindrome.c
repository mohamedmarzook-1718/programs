#include <stdio.h>

int main() {
    int abc, original, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &abc);

    original = abc;

    while (abc != 0) {
        remainder = abc % 10;
        reversed = reversed * 10 + remainder;
        abc /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}