#include <stdio.h>

int main() {
    int tam, eng, sci, soc, mat;

    // Input marks
    printf("Enter marks for Tamil: ");
    scanf("%d", &tam);
    printf("Enter marks for English: ");
    scanf("%d", &eng);
    printf("Enter marks for Science: ");
    scanf("%d", &sci);
    printf("Enter marks for Social Science: ");
    scanf("%d", &soc);
    printf("Enter marks for Mathematics: ");
    scanf("%d", &mat);

    // Check pass or fail
    printf("\nResults:\n");
    printf("Tamil: %s\n", tam > 35 ? "Pass" : "Fail");
    printf("English: %s\n", eng > 35 ? "Pass" : "Fail");
    printf("Science: %s\n", sci > 35 ? "Pass" : "Fail");
    printf("Social Science: %s\n", soc > 35 ? "Pass" : "Fail");
    printf("Mathematics: %s\n", mat > 35 ? "Pass" : "Fail");

    return 0;
}