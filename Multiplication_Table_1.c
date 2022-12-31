#include<stdio.h>
int main()
{
    int n,i,o;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        o=n*i;
        printf("%d x %d = %d
",n,i,o);
    }
}