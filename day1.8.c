#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>0&&b>0)
    printf("1st quad");
    else if (a<0&&b>0)
    printf("2nd quad");
    else if(a<0&&b<0)
    printf("3rd quad");
    else if(a>0&&b<0)
    printf("4th quad");
    else if(a==0&&b!=0)
    printf("y-axis");
    else if(b==0&&a!=0)
    printf("x-axis");
    else if(a==0&&b==0)
    printf("origin") ;
    return 0;
}