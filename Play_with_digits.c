#include<stdio.h>
int main()
{
    int a[100],n,i,s=0,sum=0,total,q,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       // printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>9)
        {
            q=a[i];
            while(q)
            {
                r=q%10;
                s=s+r;
                q=q/10;
            }
        }
        else
        {
            sum=sum+a[i];
        }
    }
    total=sum+s;
    printf("%d",total);
    
}