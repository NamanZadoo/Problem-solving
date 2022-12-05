#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,sign;
    float sum=0,f=1;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {   
        f=f*i;
        sum=sum+(pow(x,i)/f);
        sign=sign*-1;
    }
    printf(" %f ",sum);
    return 0;
}