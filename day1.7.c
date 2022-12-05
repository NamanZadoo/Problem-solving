#include<stdio.h>
int main()
{
    float temp;
    printf("ENTER THE TEMPERATURE");
    scanf("%f",&temp);
    if(temp < 0 )
    printf("Freezing weather");
    else if(temp>0 && temp<=10)
    printf("Very cold weather");
    else if(temp>10&&temp<=20)
    printf("cold weather");
    else if(temp>20&&temp<=30)
    printf("normal temp");
    else if (temp>30&&temp<40)
    printf("hot");
    else if (temp>=40)
    printf("very hot");
    return 0;
}