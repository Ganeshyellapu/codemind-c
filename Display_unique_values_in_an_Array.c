#include<stdio.h>
int main()
{
    int n,i,j,arr[100],c=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                k=1;
            }
        }
        if(k==0)
        {
            printf("%d ",arr[i]);
        }
        else if(k==1)
        {
            c+=1;
        }
    }
    if(c==n)
    {
        printf("-1");
    }
}