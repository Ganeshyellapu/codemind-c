#include<stdio.h>
int main()
{
    int n,ev=0,od=0,mi=0,r,c=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        c=c+1;
    if(r%2==0)
    {
        ev++;
    }
    else if(r%2!=0)
    {
        mi++;
    }
    else
    {
        od++;
    }
    }
    if(c==ev)
    {
        printf("Even");
    }
    else if(c==mi)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}