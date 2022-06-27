#include<stdio.h>
int main()
{
	int n,n1=0,n2=1,n3,i,l,m;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		n3=n1+n2;
		if(n3>n)
		{
			l=n2;
			break;
		}
		n1=n2;
		n2=n3;
	}
	//printf("%d",l);
	for(i=2;i<=n;i++)
	{
		n3=n1+n2;
		if(n3>n)
		{
			m=n3;
			break;
		}
		n1=n2;
		n2=n3;
	}
	//printf("%d ",m);
	if(n-l>m-n)
	{
		printf("%d",m);
	}
	else if(n-l==m-n)
	{
	    printf("%d %d",l,m);
	}
	else
	printf("%d",l);
}