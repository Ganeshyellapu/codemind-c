#include<stdio.h>
int main()
{
    int d,n,rev=0,num;
    scanf("%d",&n);
    num=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    printf("%d",rev);
}