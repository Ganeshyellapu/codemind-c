#include<stdio.h>
int main()
{
    int n,d,num,sum=0;
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        d=num%10;
        sum=sum+d;
         num=num/10;
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}