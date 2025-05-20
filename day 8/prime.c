#include<stdio.h>

int is_prime(int x){
    int i;
    for(i = 2; i <= x/2; i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
    
}
int main(){
    int x, a;
    printf("enter the value:");
    scanf("%d",&x);

    if(is_prime(x)){
        printf("%d is prime\n", x);
    } else {
        printf("%d is not prime\n", x);
    }
    return 0;
}