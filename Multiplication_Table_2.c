#include<stdio.h>
int main()
{
    int m,n,o,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        
        o=m*i;
        printf("%d x %d = %d
",m,i,o);
    }
}