#include<stdio.h>
int sum( int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int s=0;
    int n=0;
    scanf("%d",&n);
    s=sum(n);
    printf(" %d",s);
    return 0;
}
