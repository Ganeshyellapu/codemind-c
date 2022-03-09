#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,pf;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        pf=sqrt(i);
    }
    if(n%pf==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}