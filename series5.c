#include<stdio.h>
int main()
{
    int n,i,sign=1;
    float sum=0,f=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        f=f*i;
        sum=sum+(1.0/f)*sign;
        sign=sign*-1;
    }
    printf(" %f ",sum);
    return 0;
}