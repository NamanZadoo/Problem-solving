#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,f=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        f=f*i;
        sum=sum+1.0/f;
        
    }
    printf(" %f ",sum);
    return 0;
}