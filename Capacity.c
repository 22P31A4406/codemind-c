#include<stdio.h>
int main()
{
    int t,s,b,tb,kb;
    scanf("%d%d%d",&t,&s,&b);
    tb=t*s*b*2*512;
    kb=tb/1024;
    printf("%d KB",kb);
}