#include <stdio.h>

int main() {
    int hasLicense;

    printf("Do you have a license? Enter 1 for Yes, 0 for No: ");
    scanf("%d", &hasLicense);

    if (hasLicense && hasLicense == 1) {
        printf("You have a license.\n");
    } else if (hasLicense == 0) {
        printf("You do not have a license.\n");
    } else {
        printf("Invalid input. Please enter 1 for Yes or 0 for No.\n");
    }

    return 0;
}