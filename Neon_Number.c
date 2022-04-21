#include<stdio.h>
int main()
{
    int n,i,r,res=0,sum;
    scanf("%d",&i);
    n=i*i;
    while(n>0)
    {
        r=n%10;
        sum=res+r;
        res=sum;
        n=n/10;
    }
    if(res==i)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}