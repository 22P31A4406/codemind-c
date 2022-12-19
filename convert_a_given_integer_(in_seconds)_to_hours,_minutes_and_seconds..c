#include<stdio.h>
int main()
{
    int ts,h,m,s;
    scanf("%d",&ts);
    h=ts/3600;
    m=(ts-(h*3600))/60;
    s=ts-((h*3600)+(m*60));
    printf("H:M:S-%d:%d:%d",h,m,s);
}