#include<stdio.h>
int main()
{
    int i,d=0,sum=0,sum1=0,x=0,y=0;
    long long n,temp=0;
    printf("enter the number:\t");
    scanf("%lld",&n);
    temp=n;
    while (temp!=0)
    {
        temp=temp/10;
        d++;
    }
    for(i=0;i<d;i++)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    if(sum<10)
    {
        printf("%d",sum);
    }
    else
    {
        while(sum!=0)
        {
            y=sum%10;
            sum1=sum1+y;
            sum=sum/10;
        }
        printf("%d",sum1);
    }
    return 0;
}