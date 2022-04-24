#include<stdio.h>
int main()
{
    int i,r,k,n,c=0;
    scanf("%d%d%d",&i,&r,&k);
    for(n=i;n<=r;n++)
    {
        if(n%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}