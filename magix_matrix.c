#include<stdlib.h>
int main()
{
    int a[10][10];
    int i=0,j=0,k=0,l=0;
    int sum=0;
    int n=0,s1=0,s2=0,s3=0;
    printf("enter size");
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][j];
    }
    while(i<n)
    {
        for(j=0;j<n;j++)
        {
        s1=s1+a[i][j];
        }
        i++;
        if(s1==sum)
        {
            continue;
        }
        else
        {
            printf("not magic matrix");
            break;
        }
    }
    j=0;
    while(j<n)
    {
        for(i=0;i<n;i++)
        {
        s2=s2+a[i][j];
        }
        j++;
        if(s2==sum)
        {
            continue;
        }
        else
        {
            printf("not magic matrix");
            break;
        }
    }
    i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    s3=s3+a[i][j];
                }
            }
        }
          if(s3==sum)
        {
            continue;
        }
        else
        {
            printf("not magic matrix");
            break;
    }
    for(i=0<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==n-1)
            {
                s4=s4+a[i][j];
            }
        }
            if(s3==sum)
        {
            continue;
        }
        else
        {
            printf("not magic matrix");
            break;
    }
    

  
}