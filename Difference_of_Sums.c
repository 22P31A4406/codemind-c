#include<stdio.h>
int main()
{
    int n,ns,ss,d,s=0,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ns=i*i;
        sum=sum+ns;
    }   
    
    s=n*(n+1)/2;
    ss=s*s;
    d=ss-sum;
    printf("%d",d);
}