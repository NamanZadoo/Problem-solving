#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,n=0;
    printf("enter no. of terms:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int term=0;
        term= (8*i*i)+1;
        printf(" %d ",term);
    }
    return 0;
}