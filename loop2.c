#include<stdio.h>
int main()
{
    int i,j,k;
    int N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(k=0;k<=N-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d  ",j);
        }
        printf(" \n ");
    }
    return 0;
}