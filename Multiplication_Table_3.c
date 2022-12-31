#include<stdio.h>
int main()
{
    int a,b,c,i,o;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
        o=a*i;
        printf("%d x %d = %d
",a,i,o);
    }
}