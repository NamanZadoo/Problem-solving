#include<stdio.h>
int main()
{
    int a[10][10]={0};
    int n=0;
    int i=0,j=0,k=0;
    scanf("%d",&n);
    a[0][0]=1;
    for(i=0;i<=n-1;i++)
    {
        for(k=0;k<=n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {

            a[i][j]=a[i-1][j-1]+a[i-1][j];
            printf(" %d  ",a[i][j]);

        }
        printf("\n");
    }

    return 0;
}