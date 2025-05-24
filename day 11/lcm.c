#include <stdio.h>

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int x,int y){
    return (x*y)/gcd(x,y);
}
int main() {
    printf("%d",lcm(12,18));
    return 0;
}