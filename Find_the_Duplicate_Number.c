#include<stdio.h>
int main()
{
    int i,j,n,k=0,c=0,arr[100];
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
                c+=1;
                k=1;
            }
        }
        if(k==1 && c==2)
        {
            printf("%d",arr[i]);
        }
    }
}