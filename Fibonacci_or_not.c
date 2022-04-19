#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,t3;
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("True");
    }
    t3=t1+t2;
    while(t3<n)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
    if(t3==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}