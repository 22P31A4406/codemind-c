#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float b,s,ta;
    if(u<200)
    {
        b=1.20*u;
    }
    else if(u>=200&&u<400)
    {
        b=1.50*u;
    }
    else if(u>=400&&u<600)
    {
        b=1.80*u;
    }
    else
    {
        b=2.00*u;
    }
    if(b>400)
    {
        s=0.15*b;
    }
    else
    {
        s=100;
    }
    ta=b+s;
    printf("%0.2f",ta);
}