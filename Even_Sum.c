#include<stdio.h>
int main()
{
    int arr[100],n,i,sum1=0,sum2=0,sum3;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum1=sum1+arr[i];
        }
    }
    /*sum3=sum1-sum2;
    if(sum3<0)
    {
        sum3=sum3*-1;
        printf("%d",sum3);
    }
    else
    {
        printf("%d",sum3);
    }*/
    printf("%d",sum1);
}