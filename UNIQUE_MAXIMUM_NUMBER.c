#include<stdio.h>
int main()
{
    int n,i,j,c=0,max,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=-1;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i]==a[j])
            {
                c=1;
            }
        }
        if(c==0)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
    }
    printf("%d",max);
}