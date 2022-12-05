#include<stdio.h>
void prime(int n)
{
    int i=0;
    int count=0;
    for(i=2;i<=n/2;i++)
    {
        
        if(n%i==0)
        {
            count ++;
            break;
        }
      
    }  
        if(count==0)
            printf("prime ");
        else 
            printf("not");
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}