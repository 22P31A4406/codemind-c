#include<stdio.h>
int main() 
{
    int n,temp,s=0,r;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10; 
        s=s*10+r;
        n=n/10; 
    } 
    if(temp==s) 
    {
        printf("True");
    }
     else
        { 
            printf("False");
        }
}