#include<stdio.h>

int main(){
    int rows , cols ;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int depth;
    printf("Enter depth: ");
    scanf("%d", &depth);
    int arr3d[rows][cols][depth];

    // Input elements
    printf("Enter elements of the 3D array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            for(int k = 0; k < depth; k++) {
                printf("arr3d[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr3d[i][j][k]);
            }
        }
    }

    int total = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            for(int k = 0; k < depth; k++) {
                total += arr3d[i][j][k];
            }
        }
    }
    printf("Sum of all elements: %d\n", total);
}