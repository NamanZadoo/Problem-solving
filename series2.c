#include<stdio.h>
int main()
{
    int n,i,sum=0,f=1,sign=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        f=f*i;
        sum=sum+sign*f;
        sign=sign*-1;
    }
    printf(" %d ",sum);
    return 0;
}