#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sq,arr[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sq=sqrt(arr[i]);
        if(arr[i]==sq*sq)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}