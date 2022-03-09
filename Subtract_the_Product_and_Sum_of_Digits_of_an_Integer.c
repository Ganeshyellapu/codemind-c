#include<stdio.h>
int main()
{
    int n,d,sum=0,pr=1,res;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        pr=pr*d;
        sum=sum+d;
        n=n/10;
    }
    res=(pr)-(sum);
    printf("%d",res);
}