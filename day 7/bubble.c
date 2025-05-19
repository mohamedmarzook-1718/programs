#include <stdio.h>

int main() {
    int arr[8] = {7, 3, 2, 9, 1, 6, 3, 6};
    int i, j, temp;

    for(i = 0; i < 8 - 1; i++) {
        for(j = 0; j < 8 - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("sorted array: ");
    for(i = 0; i < 8; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}