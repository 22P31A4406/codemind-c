#include<stdio.h>
int main()
{
    int u;
    float cpu,b,s,ta;
    scanf("%d",&u);
    if(u<200)
    {
        cpu=1.20;
    }
    else if(u>=200&&u<400)
    {
        cpu=1.40;
    }
    else if(u>=400&&u<600)
    {
        cpu=1.60;
    }
    else if(u>=600&&u<800)
    {
        cpu=1.80;
    }
    else
    {
        cpu=2.00;
    }
    b=u*cpu;
    if(b>400)
    {
        s=b*0.15;
    }
    else
    {
        s=0.00;
    }
    ta=s+b;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f
",u,cpu,b,s,ta);
}