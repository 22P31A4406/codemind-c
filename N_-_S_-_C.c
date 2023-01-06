#include<stdio.h>
int main()
{
    int m,n,a,b,c,i;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<=n-1;i++)
    {
        a=i*i;
        b=i*i*i;
        printf("%d %d %d
",i,a,b);
    }
}