#include<stdio.h>
int perfect(int n){
    int sum =0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
    
        }
    }
}
return sum;
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(perfect(n)==n){
        printf("%d is a perfect number\n",n);
    }
    else{
        printf("%d is not a perfect number\n",n);
    }
    return 0;
}