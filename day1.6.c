#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter sides of triangle ");
    scanf(" %f %f %f",&a,&b,&c);
    if(a==b && b==c)
    printf("equilateral triangle");
    else if(a==b||a==c||b==c)
    printf("isosceles triangle");
    else
    printf("scalene triangle");
    return 0;
}