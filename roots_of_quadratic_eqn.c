#include<stdio.h>
#include<math.h>
int main()
{
    int  a,b,c;
    float x1,x2,x;
    float d;
    printf("enter the cofficeints of x^2,x and constant: ");
    scanf("%d%d%d",&a,&b,&c);
    d=((b*b)-(4.0*a*c));
    printf("d=%0.2f\n",d);
    if(d<0)
    {
        float r,i;
        d=d*-1;
        printf("imaginary and distinct roots\n");
        r=-b/2.0*a;
        i=sqrt(d)/2.0*a;
        printf("%0.2f+%0.2fi\n",r,i);
        printf("%0.2f-%0.2fi\n",r,i);
    }
    else
    {
        if(d==0)
        {
            printf("real and equal roots\n");
            x=-b/(2.0*a);
            printf("x1=x2=%0.2f",x);
        }
        else
        {
            printf("real and distinct roots\n");
            x1=(-b+sqrt(d))/(2.0*a);
            x2=(-b-sqrt(d))/(2.0*a);
            printf("%0.2f%0.2f",x1,x2);
        }
        
    }
    return 0;
}