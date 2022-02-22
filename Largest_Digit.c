#include<stdio.h>
int main()
{
    int d,n,ld;
    scanf("%d",&n);
    ld=n%10;
    while(n)
    {
        d=n%10;
        if(ld<d)
        {
            ld=d;
        }
        n=n/10;
    }
    printf("%d",ld);
}