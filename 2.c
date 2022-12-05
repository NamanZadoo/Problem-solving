#include<stdio.h>
#include<math.h>
int main() 
{
    int a,b,k;
    scanf("%d%d%d",&a,&b,&k);
    long long bro=pow(a,b);
    int m=k-1;
    while (m--)
    {
        bro/=10;
    }
    bro=bro%10;
    printf("%lld",bro);

    return 0;
}