#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,temp=0,digits=3;
    int flag=0;
    printf("enter the number:\t");
    scanf("%d",&n);
    temp=n;
    temp=n;
    for(int i=0;i<digits;i++)
    {
        int x;
        x=temp%10;
        if(x==0)
            break;
        if(n%x==0)
            flag++;
        else 
        {
            printf("not");
            return 1;
        }
        temp=temp/10;
    }
    if(flag==digits)
        printf("self dividing");
    else
        printf("not");
    return 0;
}