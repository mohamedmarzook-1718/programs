#include <stdio.h>
int reverse(int num) {
    int rev = 0, rem;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

int is_palindrome(int num) {
    return num == reverse(num);
}
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