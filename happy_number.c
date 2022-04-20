#include<stdio.h>
int main()
{
    int n,num,r,sum=0;
    scanf("%d",&n);
    num=n;
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(num>0)
        {
            r=num%10;
            sum=sum+(r*r);
            num=num/10;
        }
        num=sum;
    }
    if(sum==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}