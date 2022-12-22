#include<stdio.h>
int main()
{
    int a,b,c,s;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c&&b>c)
    {
        s=a+b;
    }
    else if(a>b&&a>c&&c>b)
    {
        s=a+c;
    }
    else if(b>a&&b>c&&a>c)
    {
        s=b+a;
    }
    else if(b>a&&b>c&&c>a)
    {
        s=b+c;
    }
    else if(c>a&&c>b&&a>b)
    {
        s=c+a;
    }
    else
    {
        s=c+b;
    }
    printf("%d",s);
}