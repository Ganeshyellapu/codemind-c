#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c=0,k=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=log10(a[i])+1;
        if(c%2==0)
        {
            k=k+1;
        }
    }
    printf("%d",k);
}