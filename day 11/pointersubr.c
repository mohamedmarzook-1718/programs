#include <stdio.h>

int main() {
    printf("POINTERS\n");
    int x, y;
    char ch;
    printf("\nENTER TWO NUMBERS: ");
    scanf("%d %d", &x, &y);
    int *a = &x, *b = &y;
    printf("\nENTER OPERATION (+, -, *, /): ");
    scanf(" %c", &ch); 
    switch (ch) {
        case '+':
            printf("ADD: %d\n", *a + *b);
            break;
        case '-':
            printf("SUB: %d\n", *a - *b);
            break;
        case '*':
            printf("MUL: %d\n", *a * *b);
            break;
        case '/':
            printf("DIV: %d\n", *a / *b);
            break;
        default:
            printf("ERROR: Invalid operator.\n");
            break;
    }
    return 0;
}