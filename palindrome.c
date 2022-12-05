#include<stdio.h>
void palindrome(int n,int c)
{
    long int a,x=0,b=0;
    b=n;
    for(int i=1;i<=c;i++)
    {

        a=n%10;
        n=n/10;
        x=x+a*10;
    }
    printf("%lu",x);
    if(x==b)
        printf("\n palindrome ");

    else 
        printf("\n not ");
}
int main()
{
    int n;
      int c=0;
    printf("enter the no. of digits:\n");
    scanf("%d",&c);
    printf("enter the number number:\t");
    scanf("%d",&n);
    palindrome(n,c);

}