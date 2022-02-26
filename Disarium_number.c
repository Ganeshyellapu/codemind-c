#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,q,sum=0,c=0;
    scanf("%d",&n);
    c=log10(n)+1;
    q=n;
    while(q)
    {
        d=q%10;
        sum=sum+pow(d,c);
        q=q/10;
        c--;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}