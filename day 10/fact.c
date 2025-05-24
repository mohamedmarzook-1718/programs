#include <stdio.h>

int factorial(int n){
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    if (num < 0){
        printf("factorial of negative number is not possible");
    }
    else {
        printf("factorial of %d is %d", num, factorial(num));
    }
    return 0;
}