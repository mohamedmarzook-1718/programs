#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    switch ((int)(temperature / 10)) {
        case 0: // temperature < 10
            printf("It's cold. Wear a jacket.\n");
            break;
        case 1: // 10 <= temperature < 20
            printf("It's cool. Wear a sweater.\n");
            break;
        default: // temperature >= 20
            printf("It's warm. Wear a t-shirt.\n");
            break;
    }

    return 0;
}