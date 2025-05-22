#include <stdio.h>

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0f / 9.0f;
}

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = fahrenheit_to_celsius(fahrenheit);
    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
    return 0;
}