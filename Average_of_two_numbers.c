#include<stdio.h>
int main()
{
    int a,b;
    float o;
    scanf("%d%d",&a,&b);
    o=(float)(a+b)/2;
    printf("Average of %d and %d is: %.2f",a,b,o);
}