#include<stdio.h>
int main()
{
    int d,m,y,ly=0,i,days,sum,n;
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&d,&m,&y);
    for(i=4;i<(y-1);i++)
    {
        if((i%400==0)||(i%4==0&&i%100!=0))
        ly++;
    } 
    sum=0;
    n=m-1;
    for(i=0;i<n;i++)
    {
        sum=sum + m[i];
    }  
    {
        if(y%400==0||(y%4==0&&y%100!=0))
        sum=sum+1;
    }
    days=(y-1)*365+ly+sum+d;
    if(day%7==0)
    printf("monday");
    else if(days%7==1)
    printf("tuesday");
    else if(days %7==2)

 
}