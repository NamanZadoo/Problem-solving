#include<stdio.h>
int main()
{
    int a[10][10]={0};
    int b=1,tr=0,tc=2;
    int i=0,j=2,k=0;
    a[0][2]=b;
    tr=i;
    tc=j;
    while(b!=25)
    {
        tr--;
        if(tr<0)
        {
            tr=4;
        }
        tc++;
        if(tc>4)
        {
            tc=0;
        }
        b++;
        if(a[tr][tc]==0)
       {    
            a[tr][tc]=b;
            i=tr,j=tc;
        }
        else
        {
            i=tr,j=tc;
            i=i+1;
            a[i][j]=b;
        }    
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}