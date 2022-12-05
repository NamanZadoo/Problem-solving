#include<stdio.h>
#include<math.h>
void prime(int m)
{
    int i=0;
    int n=2;
    int a;
    a=sqrt(m);
    while(n!=m)
    {   
        int count=0;
        for(i=2;i<=a;i++)
        {
            if(n!=i && n%i==0)
            {
                count=1;
                break;
            }
        
        }  
            if(count==0)
                printf(" %d ",n);
            n++;
    }
}
int main()
{
    int m;
    scanf("%d",&m);
    
    prime(m);
    return 0;
}