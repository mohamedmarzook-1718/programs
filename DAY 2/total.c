#include <stdio.h>

int main() {
    float marks[5], sum = 0, average;
    const char *subjects[] = {"English", "Tamil", "Maths", "Science", "Social"};
    int i;

    printf("Enter marks for the following subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("%s: ", subjects[i]);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    average = sum / 5;

    printf("\nTotal Marks: %.2f", sum);
    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}