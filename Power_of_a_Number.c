#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,k,res;
    scanf("%d%d%d",&x,&y,&z);
    k=pow(x,y);
    res=k%z;
    printf("%d",res);
}