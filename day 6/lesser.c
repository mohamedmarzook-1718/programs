#include <stdio.h>

int main() {
    int n, i, lesser;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    lesser = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < lesser) {
            lesser = arr[i];
        }
    }

    printf("The lesser (smallest) number is: %d\n", lesser);
    return 0;
}