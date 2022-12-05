#include<stdio.h>
int power(int a, int b)
{
 int i,p=1;
 for(i=1;i<=b;i++)
    p=p*a;
    
    return p;
}
int main()
{
    int s;
    int a=0,b=0;
    scanf("%d%d",&a,&b);
    s=power(a,b);
    printf("%d",s);
    return 0;


}