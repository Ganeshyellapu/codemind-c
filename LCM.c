#include<stdio.h>
int main()
{
    int n,m,i,num;
    scanf("%d%d",&n,&m);
    num=n*m;
    for(i=1;i<=num;i++)
    {
        if(i%n==0 && i%m==0)
        break;
    }
    printf("%d",i);
}