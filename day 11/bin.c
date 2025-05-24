#include <stdio.h>

int bin(int num)
{
    if(num==0)
    {
        return num;
    }
    bin(num/2);
    printf("%d",num%2);
}
int main()
{
    int n;
    printf("\n ENTER NUMBER :");
    scanf(" %d",&n);
    printf("\n BINARY NUMBERS :");
    bin(n);
    return 0;
}