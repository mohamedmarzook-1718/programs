#include <stdio.h>

int main() {
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    
    int arr3[6];
    int i, j, k = 0;
    
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            arr3[k++] = arr[i][j];
        }
    }

    for(i = 0; i < 6; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}