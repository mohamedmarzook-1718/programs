#include<stdio.h>
int sumofdigit(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The sum of digits of %d is %d\n",n,sumofdigit(n));
    return 0;
}