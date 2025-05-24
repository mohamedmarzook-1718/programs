#include<stdio.h>

int fibbo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return fibbo(n-1) + fibbo(n-2);
}

int main(){
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    if(num<0){
        printf("fibonacci of negative number");
    }
    else{
        printf("fibonacci of %d is %d", num, fibbo(num));
    }
    return 0;
}