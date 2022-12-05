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
            printf("   ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d ",i+j-1);
        }
        j--;
        for(k=1;k<=i-1;k++)
         printf(" %d ",i+j-1-k);

        printf(" \n ");
    }
    return 0;
}