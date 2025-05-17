#include<stdio.h>

int main()
{
    int arr[6];
    printf("Enter 6 integers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }
        for (int i=0;i<6;i++)
        {
            printf("%d\n",arr[i]);
        }
        return 0;
    }
